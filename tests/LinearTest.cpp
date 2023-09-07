#include <gtest/gtest.h>
#include "../include/Calculus.hpp"
#include "../include/Operations/Negative.hpp"
#include "../include/Operations/Sum.hpp"

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

TEST(LINEAR, SUM)
{
  auto x = Calculus::x();
  auto f = Sum(x, x);
  auto derivate = f.derive();
  
  EXPECT_DOUBLE_EQ(f.compute(10), 20);
  EXPECT_DOUBLE_EQ(derivate->compute(10), 2);
}

TEST(LINEAR, SUB)
{
  auto x = Calculus::x();
  auto negativeX = std::make_shared<Negative>(x);
  auto f = Sum(x, negativeX);
  auto derivate = f.derive();
  
  EXPECT_DOUBLE_EQ(f.compute(10), 0);
  EXPECT_DOUBLE_EQ(derivate->compute(10), 0);
}
