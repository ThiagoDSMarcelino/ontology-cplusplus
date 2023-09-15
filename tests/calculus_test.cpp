#include <cmath>
#include <gtest/gtest.h>
#include "../include/ontology.hpp"

TEST(CALCULUS, CONSTANT)
{
  using Ontology::create_constant;

  double n = 10;
  auto k = create_constant(M_PI);
  auto f = k;
  auto derivate = f->derive();

  EXPECT_DOUBLE_EQ(f->compute(n), M_PI);
  EXPECT_DOUBLE_EQ(derivate->compute(n), 0);
}

TEST(CALCULUS, VARIABLE)
{
  using Ontology::create_variable;

  double n = 10;
  auto x = create_variable();
  auto f = x;
  auto derivate = f->derive();

  EXPECT_DOUBLE_EQ(f->compute(n), n);
  EXPECT_DOUBLE_EQ(derivate->compute(n), 1);
}

TEST(CALCULUS, LOGARITHM)
{
  using Ontology::create_variable, Ontology::log;

  double n = 100, base = 10;
  auto x = create_variable();
  auto f = log(x, base);
  auto derivate = f->derive();

  EXPECT_DOUBLE_EQ(f->compute(n), std::log(n) / std::log(base));
  EXPECT_DOUBLE_EQ(derivate->compute(n), 1.0 / n * std::log(M_E) / std::log(base));
}

TEST(CALCULUS, NATURAL_LOGARITHM)
{
  using Ontology::create_variable, Ontology::ln;

  double n = M_E;
  auto x = create_variable();
  auto f = ln(x);
  auto derivate = f->derive();

  EXPECT_DOUBLE_EQ(f->compute(n), std::log(n));
  EXPECT_DOUBLE_EQ(derivate->compute(n), 1.0 / n);
}

TEST(CALCULUS, SINE)
{
  using Ontology::create_variable, Ontology::sin;

  double n = M_PI / 2;
  auto x = create_variable();
  auto f = sin(x);
  auto derivate = f->derive();

  EXPECT_DOUBLE_EQ(f->compute(n), std::sin(n));
  EXPECT_DOUBLE_EQ(derivate->compute(n), std::cos(n));
}

TEST(CALCULUS, COSINE)
{
  using Ontology::create_variable, Ontology::cos;

  double n = M_PI / 2;
  auto x = create_variable();
  auto f = cos(x);
  auto derivate = f->derive();

  EXPECT_DOUBLE_EQ(f->compute(n), std::cos(n));
  EXPECT_DOUBLE_EQ(derivate->compute(n), -std::sin(n));
}
