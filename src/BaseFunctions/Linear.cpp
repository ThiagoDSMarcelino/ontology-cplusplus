#include "../../include/BaseFunctions/Linear.hpp"

namespace Ontology
{

    inline double Linear::compute(double x)
    {
        return x;
    }

    inline std::unique_ptr<Function> Linear::derive()
    {
        return std::make_unique<Constant>(1);
    }
    
}