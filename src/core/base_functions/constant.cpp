#include "../../../include/core/base_functions/constant.hpp"

namespace Ontology
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