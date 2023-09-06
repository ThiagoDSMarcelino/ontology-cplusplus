#ifndef IFUNCTION_HPP
#define IFUNCTION_HPP

namespace Ontology
{

template <typename T>
class IFunction
{
    public:
        virtual double operator[](double x) = 0;
        virtual T Derive() = 0;
};

}

#endif