//
// Created by carlos on 17-3-24.
//

#include "example.h"

#include <gtest/gtest.h>

TEST(Operations, checkSum) {
  Operations op;
  ASSERT_EQ(op.sum(1,1), 2);
}