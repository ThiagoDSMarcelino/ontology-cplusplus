#include <cmath>
#include <gtest/gtest.h>
#include "../include/calculus.hpp"

using namespace Ontology;

TEST(CALCULUS, CONSTANT)
{
  auto k = Calculus::create_constant(M_PI);
  auto f = k;
  auto derivate = f->derive();

  EXPECT_DOUBLE_EQ(f->compute(10), M_PI);
  EXPECT_DOUBLE_EQ(derivate->compute(10), 0);
}

TEST(CALCULUS, VARIABLE)
{
  auto x = Calculus::create_variable();
  auto f = x;
  auto derivate = f->derive();

  EXPECT_DOUBLE_EQ(f->compute(10), 10);
  EXPECT_DOUBLE_EQ(derivate->compute(10), 1);
}
