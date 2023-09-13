#include "../../include/core/function.hpp"

namespace Ontology::Core
{

    std::shared_ptr<Function> operator-(std::shared_ptr<Function> f)
    {
        return std::make_shared<Operations::Negative>(f);
    }

    std::shared_ptr<Function> operator-(double n, std::shared_ptr<Function> g)
    {
        return std::make_shared<Constant>(n) - g;
    }
    std::shared_ptr<Function> operator-(std::shared_ptr<Function> f, double n)
    {
        return f - std::make_shared<Constant>(n);
    }
    std::shared_ptr<Function> operator-(std::shared_ptr<Function> f, std::shared_ptr<Function> g)
    {
        return std::make_shared<Operations::Sum>(f, -g);
    }

    std::shared_ptr<Function> operator+(double n, std::shared_ptr<Function> g)
    {
        return std::make_shared<Constant>(n) + g;
    }
    std::shared_ptr<Function> operator+(std::shared_ptr<Function> f, double n)
    {
        return f + std::make_shared<Constant>(n);
    }
    std::shared_ptr<Function> operator+(std::shared_ptr<Function> f, std::shared_ptr<Function> g)
    {
        return std::make_shared<Operations::Sum>(f, g);
    }

    std::shared_ptr<Function> operator*(double n, std::shared_ptr<Function> g)
    {
        return std::make_shared<Constant>(n) * g;
    }
    std::shared_ptr<Function> operator*(std::shared_ptr<Function> f, double n)
    {
        return f * std::make_shared<Constant>(n);
    }
    std::shared_ptr<Function> operator*(std::shared_ptr<Function> f, std::shared_ptr<Function> g)
    {
        return std::make_shared<Operations::Multiplication>(f, g);
    }

    std::shared_ptr<Function> operator/(double n, std::shared_ptr<Function> g)
    {
        return std::make_shared<Constant>(n) / g;
    }
    std::shared_ptr<Function> operator/(std::shared_ptr<Function> f, double n)
    {
        return f / std::make_shared<Constant>(n);
    }
    std::shared_ptr<Function> operator/(std::shared_ptr<Function> f, std::shared_ptr<Function> g)
    {
        return std::make_shared<Operations::Division>(f, g);
    }

}