#include "../include/Calculus.hpp"

namespace Ontology
{

    std::shared_ptr<Linear> Calculus::create_variable()
    {
        return std::make_shared<Linear>();
    }

    std::shared_ptr<Constant> Calculus::create_constant(double x)
    {
        return std::make_shared<Constant>(x);
    }

}