#include "../include/ontology.hpp"

namespace Ontology
{

    std::shared_ptr<Core::Function> create_variable()
    {
        return std::make_shared<Core::Linear>();
    }

    std::shared_ptr<Core::Function> create_constant(double x)
    {
        return std::make_shared<Core::Constant>(x);
    }

    std::shared_ptr<Core::Function> ln(double x)
    {
        return ln(create_constant(x));
    }

    std::shared_ptr<Core::Function> ln(const std::shared_ptr<Core::Function> f)
    {
        return std::make_shared<Core::NaturalLogarithm>(f);
    }

}