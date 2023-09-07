#include "../../include/Operations/Sum.hpp"

namespace Ontology
{

    inline double Sum::compute(double x)
    {
        return this->_f->compute(x) + this->_g->compute(x);
    }

    inline std::unique_ptr<Function> Sum::derive()
    {
        return std::make_unique<Sum>(this->_f->derive(), this->_g->derive());
    } 
    
}