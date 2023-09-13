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

    std::shared_ptr<Core::Function> log(const double u, const double a)
    {
        return log(create_constant(u), create_constant(a));
    }
    std::shared_ptr<Core::Function> log(const std::shared_ptr<Core::Function> u, const double a)
    {
        return log(u, create_constant(a));
    }
    std::shared_ptr<Core::Function> log(const double u, const std::shared_ptr<Core::Function> a)
    {
        return log(create_constant(u), a);
    }
    std::shared_ptr<Core::Function> log(const std::shared_ptr<Core::Function> u, const std::shared_ptr<Core::Function> a)
    {
        return std::make_shared<Core::Logarithm>(u, a);
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