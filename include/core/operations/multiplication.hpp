#ifndef CORE_OPERATIONS_MULTIPLICATION_HPP_
#define CORE_OPERATIONS_MULTIPLICATION_HPP_

#include "sum.hpp"

namespace Ontology::Core::Operations
{

    class Multiplication : public Function
    {
    public:
        Multiplication(const std::shared_ptr<Function> u, const std::shared_ptr<Function> v) : u(u), v(v){};
        virtual double compute(const double);
        virtual std::shared_ptr<Function> derive();

    private:
        const std::shared_ptr<Function> u;
        const std::shared_ptr<Function> v;
    };

}

#endif
