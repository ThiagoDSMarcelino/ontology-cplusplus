#include "../../../include/core/operations/sum.hpp"

namespace Ontology::Core::Operations
{

    inline double Sum::compute(double x)
    {
        return u->compute(x) + v->compute(x);
    }

    inline std::shared_ptr<Function> Sum::derive()
    {
        return u->derive() + v->derive();
    }

}