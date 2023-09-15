#include "../../include/core/cosine.hpp"

namespace Ontology::Core
{

    inline double Cosine::compute(double x)
    {
        return std::cos(u->compute(x));
    }

    inline std::shared_ptr<Function> Cosine::derive()
    {
        return -u->derive() * sin(u);
    }

}