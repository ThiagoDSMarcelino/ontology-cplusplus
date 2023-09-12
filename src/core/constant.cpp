#include "../../include/core/constant.hpp"

namespace Ontology::Core
{

    inline double Constant::compute(double x)
    {
        return this->k;
    }

    inline std::shared_ptr<Function> Constant::derive()
    {
        return std::make_shared<Constant>(0);
    }

}