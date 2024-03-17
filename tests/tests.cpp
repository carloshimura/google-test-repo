//
// Created by carlos on 17-3-24.
//

#include "example.h"

#include <gtest/gtest.h>

TEST(Operations, checkSum) {
  Operations op;
  EXPECT_EQ(op.sum(1,1), 3);
  ASSERT_EQ(op.sum(1,5), 6);

  ASSERT_EQ(op.div(4, 4), 1);
  ASSERT_EQ(op.div(4, 2), 2);
  ASSERT_EQ(op.div(3, 3), 1);

  EXPECT_EQ(op.mash(2, 2, 1), 4);
  EXPECT_EQ(op.mash(2, 2, 1), 3);

//  EXPECT_EQ();
}
