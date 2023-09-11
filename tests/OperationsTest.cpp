#include <gtest/gtest.h>
#include "../include/Calculus.hpp"

using namespace Ontology;

TEST(OPERATIONS, NEGATIVE)
{
    auto x = Calculus::create_variable();
    auto f = -*x;
    auto derivate = f->derive();

    EXPECT_DOUBLE_EQ(f->compute(10), -10);
    EXPECT_DOUBLE_EQ(derivate->compute(10), -1);
}

TEST(LINEAR, SUM)
{
    auto x = Calculus::create_variable();
    auto f = *x + x;
    auto derivate = f->derive();

    EXPECT_DOUBLE_EQ(f->compute(10), 20);
    EXPECT_DOUBLE_EQ(derivate->compute(10), 2);
}

TEST(LINEAR, SUB)
{
    auto x = Calculus::create_variable();
    auto f = *x - x;
    auto derivate = f->derive();

    EXPECT_DOUBLE_EQ(f->compute(10), 0);
    EXPECT_DOUBLE_EQ(derivate->compute(10), 0);
}

TEST(LINEAR, MULT)
{
    auto x = Calculus::create_variable();
    auto f = *x * x;
    auto derivate = f->derive();

    EXPECT_DOUBLE_EQ(f->compute(10), 100);
    EXPECT_DOUBLE_EQ(derivate->compute(10), 20);
}
