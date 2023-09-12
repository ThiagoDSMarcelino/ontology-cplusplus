#ifndef CORE_OPERATIONS_NEGATIVE_HPP_
#define CORE_OPERATIONS_NEGATIVE_HPP_

#include "function.hpp"

namespace Ontology::Core
{

    class Negative : public Function
    {
    public:
        Negative(const std::shared_ptr<Function> u) : u_ptr(u){};
        virtual double compute(const double);
        virtual std::shared_ptr<Function> derive();

    private:
        const std::shared_ptr<Function> u_ptr;
    };

}

#endif