#ifndef SUM_HPP
#define SUM_HPP

#include "../Function.hpp"

namespace Ontology
{

    class Sum : public Function
    {
    public:
        Sum(const std::shared_ptr<Function> u, const std::shared_ptr<Function> v) : u_ptr(u), v_ptr(v){};
        virtual double compute(const double);
        virtual std::unique_ptr<Function> derive();

    private:
        std::shared_ptr<Function> u_ptr;
        std::shared_ptr<Function> v_ptr;
    };

}

#endif