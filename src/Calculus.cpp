#include "../include/Calculus.hpp"

namespace Ontology
{

    std::shared_ptr<Linear> Calculus::linear_ptr = nullptr;
    std::shared_ptr<Function> Calculus::x()
    {
        if (!linear_ptr)
        {
            linear_ptr = std::make_shared<Linear>();
        }

        return linear_ptr;
    }

    std::shared_ptr<Constant> Calculus::constant_ptr = nullptr;
    std::shared_ptr<Function> Calculus::k(double x)
    {
        if (!constant_ptr)
        {
            constant_ptr = std::make_shared<Constant>(x);
        }

        return constant_ptr;
    }

    std::shared_ptr<Constant> Calculus::pi_ptr = nullptr;
    std::shared_ptr<Function> Calculus::pi()
    {
        if (!pi_ptr)
        {
            pi_ptr = std::make_shared<Constant>(M_PI);
        }

        return pi_ptr;
    }

    std::shared_ptr<Constant> Calculus::euler_ptr = nullptr;
    std::shared_ptr<Function> Calculus::euler()
    {
        if (!euler_ptr)
        {
            euler_ptr = std::make_shared<Constant>(M_E);
        }

        return euler_ptr;
    }

}