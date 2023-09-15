#ifndef ONTOLOGY_CORE_CONSTANT_HPP
#define ONTOLOGY_CORE_CONSTANT_HPP

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