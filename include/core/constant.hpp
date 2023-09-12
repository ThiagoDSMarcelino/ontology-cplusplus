#ifndef CORE_BASE_FUNCTIONS_CONSTANT_HPP_
#define CORE_BASE_FUNCTIONS_CONSTANT_HPP_

#include "function.hpp"

namespace Ontology::Core
{

    class Constant : public Function
    {
    public:
        Constant(const double value) : k(value){};
        virtual double compute(const double x);
        virtual std::shared_ptr<Function> derive();

    private:
        const double k;
    };

}

#endif