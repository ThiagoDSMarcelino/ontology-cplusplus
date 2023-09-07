#ifndef LINEAR_HPP
#define LINEAR_HPP

#include "Constant.hpp"

namespace Ontology
{

class Linear : public Function
{
    public:
        virtual double compute(double x);
        virtual std::unique_ptr<Function> derive();
};

}

#endif