#ifndef IFUNCTION_HPP
#define IFUNCTION_HPP

#include <memory>

namespace Ontology
{

    class Multiplication;
    class Negative;
    class Sum;

    class Function : public std::enable_shared_from_this<Function>
    {
    public:
        virtual double compute(const double) = 0;
        virtual std::shared_ptr<Function> derive() = 0;
    
        std::shared_ptr<Function> operator-();
        std::shared_ptr<Function> operator-(const std::shared_ptr<Function> other);
        std::shared_ptr<Function> operator+(const std::shared_ptr<Function> other);
        std::shared_ptr<Function> operator*(const std::shared_ptr<Function> other);
    };

}

#include "./Operations/Multiplication.hpp"
#include "./Operations/Negative.hpp"
#include "./Operations/Sum.hpp"

#endif