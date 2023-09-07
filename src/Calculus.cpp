#include "../include/Calculus.hpp"

namespace Ontology
{

    std::shared_ptr<Linear> Calculus::_linear = nullptr;
    std::shared_ptr<Function> Calculus::x()
    {
        if (!_linear)
        {
            _linear = std::make_shared<Linear>();
        }

        return _linear;
    }

    std::shared_ptr<Constant> Calculus::_constant = nullptr;
    std::shared_ptr<Function> Calculus::k(double x)
    {
        if (!_constant)
        {
            _constant = std::make_shared<Constant>(x);
        }

        return _constant;
    }

    std::shared_ptr<Constant> Calculus::_pi = nullptr;
    std::shared_ptr<Function> Calculus::pi()
    {
        if (!_pi)
        {
            _pi = std::make_shared<Constant>(M_PI);
        }

        return _pi;
    }

    std::shared_ptr<Constant> Calculus::_euler = nullptr;
    std::shared_ptr<Function> Calculus::euler()
    {
        if (!_euler)
        {
            _euler = std::make_shared<Constant>(M_E);
        }

        return _euler;
    }
    
}