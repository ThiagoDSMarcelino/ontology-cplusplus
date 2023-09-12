#include "../include/calculus.hpp"

namespace Ontology
{

    std::shared_ptr<Core::Function> Calculus::create_variable()
    {
        return std::make_shared<Core::Linear>();
    }

    std::shared_ptr<Core::Function> Calculus::create_constant(double x)
    {
        return std::make_shared<Core::Constant>(x);
    }

}