#ifndef CONSTANT_HPP
#define CONSTANT_HPP

#include "IFunction.hpp"

namespace Ontology
{

    class Constant : public IFunction<Constant>
    {
        public:
            Constant(double n);
            virtual double operator[](double x);
            virtual Constant Derive();
        
        private:
            double _n;
    };

}

#endif