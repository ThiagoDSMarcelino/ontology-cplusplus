#ifndef Multiplication_HPP
#define Multiplication_HPP

#include "Sum.hpp"
#include "../Function.hpp"

namespace Ontology
{

    class Multiplication : public Function
    {
    public:
        Multiplication(const std::shared_ptr<Function> u, const std::shared_ptr<Function> v) : u_ptr(u), v_ptr(v){};
        virtual double compute(const double);
        virtual std::shared_ptr<Function> derive();

    private:
        std::shared_ptr<Function> u_ptr;
        std::shared_ptr<Function> v_ptr;
    };

}

#endif
