#include <cmath>
#include <gtest/gtest.h>
#include "../include/Calculus.hpp"

using namespace Ontology;

TEST(CALCULUS, CONSTANT)
{
  auto f = Calculus::create_constant(M_PI);
  auto derivate = f->derive();

  EXPECT_DOUBLE_EQ(f->compute(10), M_PI);
  EXPECT_DOUBLE_EQ(derivate->compute(10), 0);
}

TEST(CALCULUS, VARIABLE)
{
  auto f = Calculus::create_variable();
  auto derivate = f->derive();

  EXPECT_DOUBLE_EQ(f->compute(10), 10);
  EXPECT_DOUBLE_EQ(derivate->compute(10), 1);
}
