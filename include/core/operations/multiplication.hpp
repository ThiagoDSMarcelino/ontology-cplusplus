#ifndef ONTOLOGY_CORE_OPERATIONS_MULTIPLICATION_HPP
#define ONTOLOGY_CORE_OPERATIONS_MULTIPLICATION_HPP

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
