//
// Created by carlos on 17-3-24.
//

#include "example.h"

#include <gtest/gtest.h>

TEST(Operations, checkSum) {
  Operations op;
  ASSERT_EQ(op.sum(1,1), 2);
  EXPECT_EQ(op.sum(1,1), 3);
  ASSERT_EQ(op.sum(1,5), 6);
}
TEST(Operations, checkFact) {
  Operations op3;
  ASSERT_EQ(op3.fact(5), 120);
  ASSERT_EQ(op3.fact(0), 0);
  ASSERT_NE(op3.fact(-1),0); // not equal
}

TEST(Operations, checkmult) {
	Operations op;
	EXPECT_EQ(op.mul(2,1),2);
	EXPECT_EQ(op.mul(2,5), 10);
	EXPECT_EQ(op.mul(5,5),25);
}

TEST(Operations, checkexp) {
	Operations op;
	EXPECT_EQ(op.exp(2,0), 1);
	EXPECT_EQ(op.exp(2,1), 2);
	EXPECT_EQ(op.exp(2,30),1073741824);
}

TEST(Operations, checkdiv) {
  Operations op;
  ASSERT_EQ(op.div(4, 4), 1);
  ASSERT_EQ(op.div(4, 2), 2);
  ASSERT_EQ(op.div(3, 3), 1);
}

TEST(Operations, checkmash) {
  Operations op;
  EXPECT_EQ(op.mash(2, 2, 1), 4);
  EXPECT_EQ(op.mash(2, 2, 1), 3);
}

