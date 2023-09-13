#include <gtest/gtest.h>
#include "../include/ontology.hpp"

using namespace Ontology;

TEST(CALCULUS, CONSTANT)
{
  auto k = create_constant(M_PI);
  auto f = k;
  auto derivate = f->derive();

  EXPECT_DOUBLE_EQ(f->compute(10), 3.14159265358979323846);
  EXPECT_DOUBLE_EQ(derivate->compute(10), 0);
}

TEST(CALCULUS, VARIABLE)
{
  auto x = create_variable();
  auto f = x;
  auto derivate = f->derive();

  EXPECT_DOUBLE_EQ(f->compute(10), 10);
  EXPECT_DOUBLE_EQ(derivate->compute(10), 1);
}

TEST(CALCULUS, NATURAL_LOGARITHM)
{
  auto f = ln(10);
  auto derivate = f->derive();

  EXPECT_DOUBLE_EQ(f->compute(10), 2.3025850929940459);
  EXPECT_DOUBLE_EQ(derivate->compute(10), 0);
}
