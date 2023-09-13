#ifndef CORE_OPERATIONS_DIVISION_HPP_
#define CORE_OPERATIONS_DIVISION_HPP_

#include "../function.hpp"

namespace Ontology::Core::Operations
{

    class Division : public Function
    {
    public:
        Division(const std::shared_ptr<Function> u, const std::shared_ptr<Function> v) : u(u), v(v){};
        virtual double compute(const double);
        virtual std::shared_ptr<Function> derive();

    private:
        const std::shared_ptr<Function> u;
        const std::shared_ptr<Function> v;
    };

}

#endif
