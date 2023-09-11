#ifndef CONSTANT_HPP
#define CONSTANT_HPP

#include "../Function.hpp"

namespace Ontology
{

    class Constant : public Function
    {
    public:
        Constant(const double value) : k(value){};
        virtual double compute(const double x);
        virtual std::shared_ptr<Function> derive();

    private:
        const double k;
    };

}

#endif