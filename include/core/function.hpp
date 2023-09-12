#ifndef CORE_FUNCTION_HPP_
#define CORE_FUNCTION_HPP_

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

#include "base_functions/constant.hpp"
#include "operations/multiplication.hpp"
#include "operations/negative.hpp"
#include "operations/sum.hpp"

#endif