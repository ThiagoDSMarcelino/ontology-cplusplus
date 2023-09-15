#ifndef ONTOLOGY_CORE_FUNCTION_HPP
#define ONTOLOGY_CORE_FUNCTION_HPP

#include <memory>

namespace Ontology::Core
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
    
    std::shared_ptr<Function> operator/(const double, const std::shared_ptr<Function>);
    std::shared_ptr<Function> operator/(const std::shared_ptr<Function>, const double);
    std::shared_ptr<Function> operator/(const std::shared_ptr<Function>, const std::shared_ptr<Function>);

}

#include "constant.hpp"
#include "operations/multiplication.hpp"
#include "operations/negative.hpp"
#include "operations/division.hpp"
#include "operations/sum.hpp"

#endif