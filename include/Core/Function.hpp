#ifndef IFUNCTION_HPP
#define IFUNCTION_HPP

#include <memory>

namespace Ontology
{

    class Function
    {
    public:
        virtual double compute(const double) = 0;
        virtual std::shared_ptr<Function> derive() = 0;
    };

    std::shared_ptr<Function> operator-(const std::shared_ptr<Function>);

    std::shared_ptr<Function> operator-(const double, const std::shared_ptr<Function>);
    std::shared_ptr<Function> operator-(const std::shared_ptr<Function>, const double);
    std::shared_ptr<Function> operator-(const std::shared_ptr<Function>, const std::shared_ptr<Function>);

    std::shared_ptr<Function> operator+(const double, const std::shared_ptr<Function>);
    std::shared_ptr<Function> operator+(const std::shared_ptr<Function>, const double);
    std::shared_ptr<Function> operator+(const std::shared_ptr<Function>, const std::shared_ptr<Function>);

    std::shared_ptr<Function> operator*(const double, const std::shared_ptr<Function>);
    std::shared_ptr<Function> operator*(const std::shared_ptr<Function>, const double);
    std::shared_ptr<Function> operator*(const std::shared_ptr<Function>, const std::shared_ptr<Function>);

}

#include "BaseFunctions/Constant.hpp"
#include "Operations/Multiplication.hpp"
#include "Operations/Negative.hpp"
#include "Operations/Sum.hpp"

#endif