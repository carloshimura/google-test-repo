//
// Created by carlos on 17-3-24.
//

#include "example.h"

#include <gtest/gtest.h>

TEST(Operations, checkSum) {
  Operations op;
  ASSERT_EQ(op.sum(1,1), 2);
}

TEST(Operations, checkMulti) {
  Operations op2;
  ASSERT_EQ(op2.mul(2,2), 4);
  ASSERT_EQ(op2.mul(-1,0), 0);
  ASSERT_EQ(op2.mul(100000,1),100000);
}

TEST(Operations, checkFact) {
  Operations op3;
  ASSERT_EQ(op3.fact(5), 120);
  ASSERT_EQ(op3.fact(0), 0);
  ASSERT_NE(op3.fact(-1),0); // not equal
}