#ifndef LINEAR_HPP
#define LINEAR_HPP

#include "Constant.hpp"

namespace Ontology
{

    class Linear : public Function
    {
    public:
        virtual double compute(const double);
        virtual std::shared_ptr<Function> derive();
    };

}

#endif