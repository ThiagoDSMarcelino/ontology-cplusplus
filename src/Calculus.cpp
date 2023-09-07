#include "../include/Calculus.hpp"

namespace Ontology
{

std::shared_ptr<Linear> Calculus::_linear = nullptr;
std::shared_ptr<Function> Calculus::x() {
    if (!_linear) {
        _linear = std::make_shared<Linear>();
    }

    return _linear;
}

std::shared_ptr<Constant> Calculus::_constant = nullptr;
std::shared_ptr<Function> Calculus::k(double x) {
    if (!_constant) {
        _constant = std::make_shared<Constant>(x);
    }

    return _constant;
}

}