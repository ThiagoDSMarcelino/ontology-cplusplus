#ifndef IFUNCTION_HPP
#define IFUNCTION_HPP

#include <memory>

namespace Ontology
{

    class Function
    {
    public:
        virtual double compute(const double) = 0;
        virtual std::unique_ptr<Function> derive() = 0;
    };

}

#endif