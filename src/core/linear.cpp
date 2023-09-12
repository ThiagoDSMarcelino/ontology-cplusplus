#include "../../include/core/linear.hpp"

namespace Ontology::Core
{

    inline double Linear::compute(double x)
    {
        return x;
    }

    inline std::shared_ptr<Function> Linear::derive()
    {
        return std::make_shared<Constant>(1);
    }
    
}