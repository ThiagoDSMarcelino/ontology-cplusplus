#include "../../include/core/natural_logarithm.hpp"

namespace Ontology::Core
{

    inline double NaturalLogarithm::compute(double x)
    {
        return log(u->compute(x));
    }

    inline std::shared_ptr<Function> NaturalLogarithm::derive()
    {
        return u->derive() / u;
    }

}