#include "../../../include/core/operations/negative.hpp"

namespace Ontology::Core::Operations
{

    inline double Negative::compute(double x)
    {
        return -u->compute(x);
    }

    inline std::shared_ptr<Function> Negative::derive()
    {
        return -u->derive();
    }

}