#include "../../../include/core/base_functions/linear.hpp"

namespace Ontology
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