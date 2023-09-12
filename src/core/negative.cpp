#include "../../include/core/negative.hpp"

namespace Ontology::Core
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