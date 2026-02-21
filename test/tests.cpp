// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(st1, checkPrime1) {
  uint64_t res = checkPrime(2);
  uint64_t expected = true;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime2) {
  uint64_t res = checkPrime(1);
  uint64_t expected = true;
  EXPECT_NE(expected, res);
}

TEST(st1, checkPrime3) {
  uint64_t res = checkPrime(19);
  uint64_t expected = true;
  EXPECT_EQ(expected, res);
}

TEST(st1, checkPrime4) {
  uint64_t res = checkPrime(109);
  uint64_t expected = true;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime1) {
  uint64_t res = nPrime(1);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime2) {
  uint64_t res = nPrime(5);
  uint64_t expected = 11;
  EXPECT_EQ(expected, res);
}

TEST(st1, nPrime3) {
  uint64_t res = nPrime(7);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime1) {
  uint64_t res = nextPrime(2);
  uint64_t expected = 3;
  EXPECT_EQ(expected, res);
}

TEST(st1, nextPrime2) {
  uint64_t res = nextPrime(2);
  uint64_t expected = 2;
  EXPECT_NE(expected, res);
}

TEST(st1, nextPrime3) {
  uint64_t res = nextPrime(15);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime1) {
  uint64_t res = sumPrime(2);
  uint64_t expected = 0;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime2) {
  uint64_t res = sumPrime(3);
  uint64_t expected = 2;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime3) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime4) {
  uint64_t res = sumPrime(19);
  uint64_t expected = 58;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime5) {
  uint64_t res = sumPrime(32);
  uint64_t expected = 160;
  EXPECT_EQ(expected, res);
}
