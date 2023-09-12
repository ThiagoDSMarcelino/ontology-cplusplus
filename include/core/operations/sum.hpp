#ifndef CORE_OPERATIONS_SUM_HPP_
#define CORE_OPERATIONS_SUM_HPP_

#include "../function.hpp"

namespace Ontology
{

    class Sum : public Function
    {
    public:
        Sum(const std::shared_ptr<Function> u, const std::shared_ptr<Function> v) : u_ptr(u), v_ptr(v){};
        virtual double compute(const double);
        virtual std::shared_ptr<Function> derive();

    private:
        const std::shared_ptr<Function> u_ptr;
        const std::shared_ptr<Function> v_ptr;
    };

}

#endif