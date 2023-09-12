#include "../../../include/core/operations/negative.hpp"

namespace Ontology
{

    inline double Negative::compute(double x)
    {
        return -this->u_ptr->compute(x);
    }

    inline std::shared_ptr<Function> Negative::derive()
    {
        return std::make_shared<Negative>(this->u_ptr->derive());
    }

}