#include "../../../include/core/operations/division.hpp"

namespace Ontology::Core::Operations
{

    inline double Division::compute(double x)
    {
        return u->compute(x) / v->compute(x);
    }

    inline std::shared_ptr<Function> Division::derive()
    {
        return (u->derive() * v - v->derive() * u) / (v * v);
    }

}