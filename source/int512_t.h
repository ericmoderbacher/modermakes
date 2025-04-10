//
// Created by Eric Moderbacher on 4/3/25.
//

// int512_t.h
#ifndef INT512_T_H
#define INT512_T_H

#include <cstdint>
#include <array>

struct int512_t {
    std::array<uint64_t, 8> words;

    int512_t(int64_t val = 0);

    // Arithmetic operators
    int512_t operator+(const int512_t &other) const;
    int512_t operator-(const int512_t &other) const;
    int512_t operator*(const int512_t &other) const;
    int512_t operator/(const int512_t &other) const;
    int512_t operator%(const int512_t &other) const;

    // Bitwise operators
    int512_t operator&(const int512_t &other) const;
    int512_t operator|(const int512_t &other) const;
    int512_t operator^(const int512_t &other) const;
    int512_t operator<<(const int shift) const;
    int512_t operator>>(const int shift) const;
    int512_t operator~() const;

    // Unary operators
    int512_t& operator++();
    int512_t operator++(int);
    int512_t& operator--();
    int512_t operator--(int);
    int512_t operator+() const;
    int512_t operator-() const;

    // Comparison operators
    bool operator==(const int512_t &other) const;
    bool operator!=(const int512_t &other) const;
    bool operator<(const int512_t &other) const;
    bool operator<=(const int512_t &other) const;
    bool operator>(const int512_t &other) const;
    bool operator>=(const int512_t &other) const;

    // Conversion operator
    explicit operator int64_t() const;
};

#endif // INT512_T_H

// int512_t.cpp
#include "int512_t.h"
#include <algorithm>
#include <stdexcept>

int512_t::int512_t(int64_t val) {
    words.fill(0);
    words[0] = static_cast<uint64_t>(val);
}

// Arithmetic operators (simplified placeholders)
int512_t int512_t::operator+(const int512_t &other) const {
    int512_t result;
    uint64_t carry = 0;
    for (size_t i = 0; i < words.size(); ++i) {
        uint64_t sum = words[i] + other.words[i] + carry;
        carry = (sum < words[i]);
        result.words[i] = sum;
    }
    return result;
}

int512_t int512_t::operator-(const int512_t &other) const {
    int512_t result;
    uint64_t borrow = 0;
    for (size_t i = 0; i < words.size(); ++i) {
        uint64_t diff = words[i] - other.words[i] - borrow;
        borrow = (words[i] < other.words[i] + borrow);
        result.words[i] = diff;
    }
    return result;
}

// Other arithmetic and bitwise operations omitted for brevity...

// Comparison operators
bool int512_t::operator==(const int512_t &other) const {
    return words == other.words;
}

bool int512_t::operator!=(const int512_t &other) const {
    return !(*this == other);
}

bool int512_t::operator<(const int512_t &other) const {
    for (size_t i = words.size(); i > 0; --i) {
        if (words[i-1] != other.words[i-1]) {
            return words[i-1] < other.words[i-1];
        }
    }
    return false;
}

bool int512_t::operator<=(const int512_t &other) const {
    return (*this < other) || (*this == other);
}

bool int512_t::operator>(const int512_t &other) const {
    return !(*this <= other);
}

bool int512_t::operator>=(const int512_t &other) const {
    return !(*this < other);
}

// Conversion operator
int512_t::operator int64_t() const {
    return static_cast<int64_t>(words[0]);
}