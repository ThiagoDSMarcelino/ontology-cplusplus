#include "../../include/BaseFunctions/Constant.hpp"

namespace Ontology
{

    inline double Constant::compute(double x)
    {
        return this->_n;
    }

    inline std::unique_ptr<Function> Constant::derive()
    {
        return std::make_unique<Constant>(0);
    }
    
}