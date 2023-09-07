#include "../../include/BaseFunctions/Linear.hpp"

namespace Ontology
{

double Linear::compute(double x) {
    return x;
}

std::unique_ptr<Function> Linear::derive() {
    return std::make_unique<Constant>(1);
}

}