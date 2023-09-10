#include "../../include/Operations/Negative.hpp"

namespace Ontology
{

    inline double Negative::compute(double x)
    {
        return -this->u_ptr->compute(x);
    }

    inline std::unique_ptr<Function> Negative::derive()
    {
        return std::make_unique<Negative>(this->u_ptr->derive());
    }

}