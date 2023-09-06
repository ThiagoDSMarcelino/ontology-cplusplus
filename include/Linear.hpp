#ifndef LINEAR_HPP
#define LINEAR_HPP

#include "Constant.hpp"

namespace Ontology
{

class Linear : public IFunction<Constant>
{
    public:
        virtual double operator[](double x);
        virtual Constant Derive();
};

}

#endif