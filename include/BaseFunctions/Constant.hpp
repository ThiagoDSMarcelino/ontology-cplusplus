#ifndef CONSTANT_HPP
#define CONSTANT_HPP

#include "../Function.hpp"

namespace Ontology
{

    class Constant : public Function
    {
    public:
        Constant(double value) : _k(value){};
        virtual double compute(double x);
        virtual std::unique_ptr<Function> derive();

    private:
        double _k;
    };
    
}

#endif