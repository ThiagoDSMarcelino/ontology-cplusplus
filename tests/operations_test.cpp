#include <gtest/gtest.h>
#include "../include/ontology.hpp"

TEST(OPERATIONS, NEGATIVE)
{
    auto x = Ontology::create_variable();
    auto f = -x;
    auto derivate = f->derive();

    EXPECT_DOUBLE_EQ(f->compute(10), -10);
    EXPECT_DOUBLE_EQ(derivate->compute(10), -1);
}

TEST(OPERATIONS, SUM)
{
    auto x = Ontology::create_variable();
    auto f = x + x;
    auto derivate = f->derive();

    EXPECT_DOUBLE_EQ(f->compute(10), 20);
    EXPECT_DOUBLE_EQ(derivate->compute(10), 2);
}

TEST(OPERATIONS, SUBTRACTION)
{
    auto x = Ontology::create_variable();
    auto f = x - x;
    auto derivate = f->derive();

    EXPECT_DOUBLE_EQ(f->compute(10), 0);
    EXPECT_DOUBLE_EQ(derivate->compute(10), 0);
}

TEST(OPERATIONS, MULTIPLICATION)
{
    auto x = Ontology::create_variable();
    auto f = x * x;
    auto derivate = f->derive();

    EXPECT_DOUBLE_EQ(f->compute(10), 100);
    EXPECT_DOUBLE_EQ(derivate->compute(10), 20);
}

TEST(OPERATIONS, DIVISION)
{
    auto x = Ontology::create_variable();
    auto f = x / x;
    auto derivate = f->derive();

    EXPECT_DOUBLE_EQ(f->compute(10), 1);
    EXPECT_DOUBLE_EQ(derivate->compute(10), 0);
}
