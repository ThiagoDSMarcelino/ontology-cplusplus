#include <gtest/gtest.h>
#include "../include/Calculus.hpp"
#include "../include/Operations/Negative.hpp"

using namespace Ontology;

TEST(LINEAR, COMPUTE_DERIVATE)
{
  auto f = Calculus::x();
  auto derivate = f->derive();

  EXPECT_DOUBLE_EQ(f->compute(10), 10);
  EXPECT_DOUBLE_EQ(derivate->compute(10), 1);
}

TEST(LINEAR, NEGATIVE)
{
  auto x = Calculus::x();
  auto f = Negative(x);
  auto derivate = f.derive();
  
  EXPECT_DOUBLE_EQ(f.compute(10), -10);
  EXPECT_DOUBLE_EQ(derivate->compute(10), -1);
}
