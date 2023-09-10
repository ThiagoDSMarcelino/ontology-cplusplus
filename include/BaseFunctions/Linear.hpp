#ifndef LINEAR_HPP
#define LINEAR_HPP

#include "Constant.hpp"

namespace Ontology
{

    class Linear : public Function
    {
    public:
        virtual double compute(const double);
        virtual std::unique_ptr<Function> derive();
    };

}

#endif