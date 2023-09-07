#include <gtest/gtest.h>
#include "../include/Calculus.hpp"
#include "../include/Operations/Negative.hpp"
#include <memory>

using namespace Ontology;

TEST(ComputeAndDerive, ConstantFunction) {
  auto f = Calculus::k(5);
  auto derivate = f->derive();

  EXPECT_DOUBLE_EQ(f->compute(10), 5);
  EXPECT_DOUBLE_EQ(derivate->compute(10), 0);
}

TEST(ComputeAndDerive, LinearFunction) {
  auto f = Calculus::x();
  auto derivate = f->derive();
  
  EXPECT_DOUBLE_EQ(f->compute(10), 10);
  EXPECT_DOUBLE_EQ(derivate->compute(10), 1);
}

TEST(ComputeAndDerive, NegativeFunction) {
  auto x = Calculus::x();
  auto f = Negative(x);
  auto derivate = f.derive();

  
  EXPECT_DOUBLE_EQ(f.compute(10), -10);
  EXPECT_DOUBLE_EQ(derivate->compute(10), -1);
}
