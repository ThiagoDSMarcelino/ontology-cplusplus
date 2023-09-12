#include "../include/calculus.hpp"

namespace Ontology
{

    std::shared_ptr<Function> Calculus::create_variable()
    {
        return std::make_shared<Linear>();
    }

    std::shared_ptr<Function> Calculus::create_constant(double x)
    {
        return std::make_shared<Constant>(x);
    }

}