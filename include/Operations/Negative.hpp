#ifndef NEGATIVE_HPP
#define NEGATIVE_HPP

#include "../Function.hpp"

namespace Ontology
{
    
    class Negative : public Function
    {
    public:
        Negative(std::shared_ptr<Function> u) : _u(u) {};
        virtual double compute(double x);
        virtual std::unique_ptr<Function> derive();

    private:
        std::shared_ptr<Function> _u;
    };

}

#endif