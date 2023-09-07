#include "../../include/Operations/Negative.hpp"

namespace Ontology
{

Negative::Negative(std::shared_ptr<Function> u) {
    this->_u = u;
}

double Negative::compute(double x) {
    return -this->_u->compute(x);
}

std::unique_ptr<Function> Negative::derive() {
    return std::make_unique<Negative>(this->_u->derive());
}

}