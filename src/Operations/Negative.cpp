#include "../../include/Operations/Negative.hpp"

namespace Ontology
{

    inline double Negative::compute(double x)
    {
        return -this->_u->compute(x);
    }

    inline std::unique_ptr<Function> Negative::derive()
    {
        return std::make_unique<Negative>(this->_u->derive());
    }
    
}