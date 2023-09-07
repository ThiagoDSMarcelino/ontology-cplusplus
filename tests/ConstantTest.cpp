#include <gtest/gtest.h>
#include "../include/Calculus.hpp"
#include <cmath>

using namespace Ontology;

TEST(CONSTANT, K)
{
  auto f = Calculus::k(5);
  auto derivate = f->derive();

  EXPECT_DOUBLE_EQ(f->compute(10), 5);
  EXPECT_DOUBLE_EQ(derivate->compute(10), 0);
}

TEST(CONSTANT, PI)
{
  auto f = Calculus::k(5);
  auto derivate = f->derive();

  EXPECT_DOUBLE_EQ(f->compute(10), 5);
  EXPECT_DOUBLE_EQ(derivate->compute(10), 0);
}

TEST(CONSTANT, EULER)
{
  auto f = Calculus::k(5);
  auto derivate = f->derive();

  EXPECT_DOUBLE_EQ(f->compute(10), 5);
  EXPECT_DOUBLE_EQ(derivate->compute(10), 0);
}