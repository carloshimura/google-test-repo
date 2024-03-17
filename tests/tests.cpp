//
// Created by carlos on 17-3-24.
//

#include "example.h"

#include <gtest/gtest.h>

TEST(Operations, checkSum) {
  Operations op;
  ASSERT_EQ(op.sum(1,1), 2);
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