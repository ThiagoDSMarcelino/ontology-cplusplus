#ifndef CORE_BASE_FUNCTIONS_LINEAR_HPP_
#define CORE_BASE_FUNCTIONS_LINEAR_HPP_

#include "constant.hpp"

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