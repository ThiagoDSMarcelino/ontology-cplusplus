#include "../include/ontology.hpp"

namespace Ontology
{

#pragma region Creates

    std::shared_ptr<Core::Function> create_variable()
    {
        return std::make_shared<Core::Linear>();
    }

    std::shared_ptr<Core::Function> create_constant(const double x)
    {
        return std::make_shared<Core::Constant>(x);
    }

#pragma endregion

#pragma region Logs

    std::shared_ptr<Core::Function> log(const double x, const double base)
    {
        return log(create_constant(x), create_constant(base));
    }
    std::shared_ptr<Core::Function> log(const std::shared_ptr<Core::Function> f,
                                        const double base)
    {
        return log(f, create_constant(base));
    }
    std::shared_ptr<Core::Function> log(const double x,
                                        const std::shared_ptr<Core::Function> base)
    {
        return log(create_constant(x), base);
    }
    std::shared_ptr<Core::Function> log(const std::shared_ptr<Core::Function> f,
                                        const std::shared_ptr<Core::Function> base)
    {
        return std::make_shared<Core::Logarithm>(f, base);
    }

#pragma endregion

#pragma region Natural Log

    std::shared_ptr<Core::Function> ln(const double x)
    {
        return ln(create_constant(x));
    }

    std::shared_ptr<Core::Function> ln(const std::shared_ptr<Core::Function> f)
    {
        return std::make_shared<Core::NaturalLogarithm>(f);
    }

#pragma endregion

#pragma region Sine

    std::shared_ptr<Core::Function> sin(const double x)
    {
        return sin(create_constant(x));
    }
    std::shared_ptr<Core::Function> sin(const std::shared_ptr<Core::Function> f)
    {
        return std::make_shared<Core::Sine>(f);
    }

#pragma endregion

#pragma region Cosine

    std::shared_ptr<Core::Function> cos(const double x)
    {
        return cos(create_constant(x));
    }
    std::shared_ptr<Core::Function> cos(const std::shared_ptr<Core::Function> f)
    {
        return std::make_shared<Core::Cosine>(f);
    }

#pragma endregion

} // namespace Ontology