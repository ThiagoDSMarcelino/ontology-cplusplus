#ifndef CONSTANT_HPP
#define CONSTANT_HPP

#include "../Function.hpp"

namespace Ontology
{

    class Constant : public Function
    {
    public:
        Constant(double n) : _n(n){};
        virtual double compute(double x);
        virtual std::unique_ptr<Function> derive();

    private:
        double _n;
    };
    
}

#endif