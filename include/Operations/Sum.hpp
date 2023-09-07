#ifndef SUM_HPP
#define SUM_HPP

#include "../Function.hpp"

namespace Ontology
{
    
    class Sum : public Function
    {
    public:
        Sum(std::shared_ptr<Function> f, std::shared_ptr<Function> g) : _f(f), _g(g) {};
        virtual double compute(double x);
        virtual std::unique_ptr<Function> derive();

    private:
        std::shared_ptr<Function> _f;
        std::shared_ptr<Function> _g;
    };

}

#endif