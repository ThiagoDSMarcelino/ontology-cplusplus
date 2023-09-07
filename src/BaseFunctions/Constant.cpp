#include "../../include/BaseFunctions/Constant.hpp"

namespace Ontology
{

Constant::Constant(double n) {
    this->_n = n;
}

double Constant::compute(double x) {
    return this->_n;
}

std::unique_ptr<Function> Constant::derive() {
    return std::make_unique<Constant>(0);
}

}