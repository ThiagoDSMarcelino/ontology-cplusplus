#ifndef NEGATIVE_HPP
#define NEGATIVE_HPP

#include "../Function.hpp"

namespace Ontology
{

    class Negative : public Function
    {
    public:
        Negative(const std::shared_ptr<Function> u) : u_ptr(u){};
        virtual double compute(const double);
        virtual std::unique_ptr<Function> derive();

    private:
        std::shared_ptr<Function> u_ptr;
    };

}

#endif