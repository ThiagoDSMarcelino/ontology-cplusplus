#include "../../include/Operations/Sum.hpp"

namespace Ontology
{

    inline double Sum::compute(double x)
    {
        return this->u_ptr->compute(x) + this->v_ptr->compute(x);
    }

    inline std::shared_ptr<Function> Sum::derive()
    {
        return std::make_shared<Sum>(this->u_ptr->derive(), this->v_ptr->derive());
    }

}