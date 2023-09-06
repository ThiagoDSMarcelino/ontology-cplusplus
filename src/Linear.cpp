#include "../include/Linear.hpp"

namespace Ontology
{

double Linear::operator[](double x) {
    return x;
}

Constant Linear::Derive() {
    return Constant(1);
}

}