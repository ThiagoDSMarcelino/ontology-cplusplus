#include "../../include/Operations/Multiplication.hpp"

namespace Ontology
{

    inline double Multiplication::compute(double x)
    {
        return this->u_ptr->compute(x) * this->v_ptr->compute(x);
    }

    inline std::shared_ptr<Function> Multiplication::derive()
    {
        const auto uDerivative = this->u_ptr->derive();
        const auto vDerivative = this->v_ptr->derive();

        return std::make_shared<Sum>(std::make_shared<Multiplication>(uDerivative, v_ptr), std::make_shared<Multiplication>(vDerivative, u_ptr));
    }

}