#include "../../include/core/logarithm.hpp"

namespace Ontology::Core
{

    inline double Logarithm::compute(double x)
    {
        return std::log(u->compute(x)) / std::log(a->compute(x));
    }

    inline std::shared_ptr<Function> Logarithm::derive()
    {
        return u->derive() / u * log(create_constant(M_E), a);
    }

}