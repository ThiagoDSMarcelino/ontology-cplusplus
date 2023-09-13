#include "../../../include/core/operations/multiplication.hpp"

namespace Ontology::Core::Operations
{

    inline double Multiplication::compute(double x)
    {
        return u->compute(x) * v->compute(x);
    }

    inline std::shared_ptr<Function> Multiplication::derive()
    {
        return u->derive() * v + v->derive() * u;
    }

}