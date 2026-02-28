// Copyright 2025 UNN-CS
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(CheckPrimeTest, HandlesZeroAndOne) {
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
}

TEST(CheckPrimeTest, HandlesSmallPrimes) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(5));
    EXPECT_TRUE(checkPrime(7));
    EXPECT_TRUE(checkPrime(11));
}

TEST(CheckPrimeTest, HandlesSmallComposites) {
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(6));
    EXPECT_FALSE(checkPrime(8));
    EXPECT_FALSE(checkPrime(9));
    EXPECT_FALSE(checkPrime(10));
}

TEST(CheckPrimeTest, HandlesLargePrime) {
    EXPECT_TRUE(checkPrime(1000003)); 
}

TEST(NPrimeTest, FirstFew) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(4), 7);
    EXPECT_EQ(nPrime(5), 11);
}

TEST(NPrimeTest, TenthPrime) {
    EXPECT_EQ(nPrime(10), 29);
}

TEST(NPrimeTest, HundredthPrime) {
    EXPECT_EQ(nPrime(100), 541);
}

TEST(NextPrimeTest, EdgeCases) {
    EXPECT_EQ(nextPrime(0), 2);
    EXPECT_EQ(nextPrime(1), 2);
    EXPECT_EQ(nextPrime(2), 3);
}

TEST(NextPrimeTest, SmallNumbers) {
    EXPECT_EQ(nextPrime(3), 5);
    EXPECT_EQ(nextPrime(4), 5);
    EXPECT_EQ(nextPrime(5), 7);
    EXPECT_EQ(nextPrime(6), 7);
    EXPECT_EQ(nextPrime(7), 11);
}

TEST(NextPrimeTest, LargerNumbers) {
    EXPECT_EQ(nextPrime(11), 13);
    EXPECT_EQ(nextPrime(12), 13);
    EXPECT_EQ(nextPrime(13), 17);
    EXPECT_EQ(nextPrime(14), 17);
}

TEST(SumPrimeTest, ZeroAndSmallBounds) {
    EXPECT_EQ(sumPrime(1), 0);
    EXPECT_EQ(sumPrime(2), 0);
    EXPECT_EQ(sumPrime(3), 2);  
    EXPECT_EQ(sumPrime(4), 2);  
    EXPECT_EQ(sumPrime(5), 5);  
}

TEST(SumPrimeTest, UpToTwenty) {
    EXPECT_EQ(sumPrime(20), 77);
}

TEST(st1, sumPrime1) {
    uint64_t res = sumPrime(2000000);
    uint64_t expected = 142913828922;
    EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime2) {
    uint64_t res = sumPrime(10);
    uint64_t expected = 17;
    EXPECT_EQ(expected, res);
}