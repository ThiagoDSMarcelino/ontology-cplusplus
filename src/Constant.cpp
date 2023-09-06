#include "../include/Constant.hpp"

namespace Ontology
{

Constant::Constant(double n) {
    this->_n = n;
}

double Constant::operator[](double x) {
    return this->_n;
}

Constant Constant::Derive() {
    return Constant(0);
}

}