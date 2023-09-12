#ifndef MULTIPLICATION_HPP
#define MULTIPLICATION_HPP

#include "Sum.hpp"

namespace Ontology
{

    class Multiplication : public Function
    {
    public:
        Multiplication(const std::shared_ptr<Function> u, const std::shared_ptr<Function> v) : u_ptr(u), v_ptr(v){};
        virtual double compute(const double);
        virtual std::shared_ptr<Function> derive();

    private:
        const std::shared_ptr<Function> u_ptr;
        const std::shared_ptr<Function> v_ptr;
    };

}

#endif
