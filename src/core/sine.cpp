#include "../../include/core/sine.hpp"

namespace Ontology::Core
{

    inline double Sine::compute(double x)
    {
        return std::sin(u->compute(x));
    }

    inline std::shared_ptr<Function> Sine::derive()
    {
        return u->derive() * cos(u);
    }

}