#include <gtest/gtest.h>
#include "../include/Calculus.hpp"

using namespace Ontology;

TEST(LinearFunction, BasicAssertions) {
  auto x = Calculus::x();
  
  EXPECT_EQ(x[10], 10);
  EXPECT_EQ(x.Derive()[10], 1);
}