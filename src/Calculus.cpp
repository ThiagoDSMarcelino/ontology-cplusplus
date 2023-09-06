#include "../include/Calculus.hpp"

namespace Ontology
{

std::shared_ptr<Linear> Calculus::_linear = nullptr;

Linear Calculus::x() {
    if (!_linear) {
        _linear = std::make_shared<Linear>();
    }

    return *_linear;
}

}