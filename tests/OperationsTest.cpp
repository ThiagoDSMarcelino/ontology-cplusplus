#include <gtest/gtest.h>
#include "../include/Calculus.hpp"

using namespace Ontology;

TEST(NEGATIVE, FUNCTION)
{
    auto x = Calculus::create_variable();
    auto f = -x;
    auto derivate = f->derive();

    EXPECT_DOUBLE_EQ(f->compute(10), -10);
    EXPECT_DOUBLE_EQ(derivate->compute(10), -1);
}

TEST(SUM, NUMBER_FUNCTION)
{
    auto x = Calculus::create_variable();
    auto f = 5 + x;
    auto derivate = f->derive();

    EXPECT_DOUBLE_EQ(f->compute(10), 15);
    EXPECT_DOUBLE_EQ(derivate->compute(10), 1);
}

TEST(SUM, FUNCTION_NUMBER)
{
    auto x = Calculus::create_variable();
    auto f = x + 5;
    auto derivate = f->derive();

    EXPECT_DOUBLE_EQ(f->compute(10), 15);
    EXPECT_DOUBLE_EQ(derivate->compute(10), 1);
}

TEST(SUM, FUNCTION_FUNCTION)
{
    auto x = Calculus::create_variable();
    auto f = x + x;
    auto derivate = f->derive();

    EXPECT_DOUBLE_EQ(f->compute(10), 20);
    EXPECT_DOUBLE_EQ(derivate->compute(10), 2);
}

TEST(SUB, NUMBER_FUNCTION)
{
    auto x = Calculus::create_variable();
    auto f = 5 - x;
    auto derivate = f->derive();

    EXPECT_DOUBLE_EQ(f->compute(10), -5);
    EXPECT_DOUBLE_EQ(derivate->compute(10), -1);
}

TEST(SUB, FUNCTION_NUMBER)
{
    auto x = Calculus::create_variable();
    auto f = x - 5;
    auto derivate = f->derive();

    EXPECT_DOUBLE_EQ(f->compute(10), 5);
    EXPECT_DOUBLE_EQ(derivate->compute(10), 1);
}

TEST(SUB, FUNCTION_FUNCTION)
{
    auto x = Calculus::create_variable();
    auto f = x - x;
    auto derivate = f->derive();

    EXPECT_DOUBLE_EQ(f->compute(10), 0);
    EXPECT_DOUBLE_EQ(derivate->compute(10), 0);
}

TEST(MULT, NUMBER_FUNCTION)
{
    auto x = Calculus::create_variable();
    auto f = 5 * x;
    auto derivate = f->derive();

    EXPECT_DOUBLE_EQ(f->compute(10), 50);
    EXPECT_DOUBLE_EQ(derivate->compute(10), 5);
}

TEST(MULT, FUNCTION_NUMBER)
{
    auto x = Calculus::create_variable();
    auto f = x * 5;
    auto derivate = f->derive();

    EXPECT_DOUBLE_EQ(f->compute(10), 50);
    EXPECT_DOUBLE_EQ(derivate->compute(10), 5);
}

TEST(MULT, FUNCTION_FUNCTION)
{
    auto x = Calculus::create_variable();
    auto f = x * x;
    auto derivate = f->derive();

    EXPECT_DOUBLE_EQ(f->compute(10), 100);
    EXPECT_DOUBLE_EQ(derivate->compute(10), 20);
}
