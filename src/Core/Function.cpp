#include "../../include/Core/Function.hpp"

namespace Ontology
{

    std::shared_ptr<Function> operator-(std::shared_ptr<Function> f)
    {
        return std::make_shared<Negative>(f);
    }

    std::shared_ptr<Function> operator-(double n, std::shared_ptr<Function> g)
    {
        return std::make_shared<Sum>(std::make_shared<Constant>(n), -g);
    }
    std::shared_ptr<Function> operator-(std::shared_ptr<Function> f, double n)
    {
        return std::make_shared<Sum>(f, -std::make_shared<Constant>(n));
    }
    std::shared_ptr<Function> operator-(std::shared_ptr<Function> f, std::shared_ptr<Function> g)
    {
        return std::make_shared<Sum>(f, -g);
    }
    
    std::shared_ptr<Function> operator+(double n, std::shared_ptr<Function> g)
    {
        return std::make_shared<Sum>(std::make_shared<Constant>(n), g);
    }
    std::shared_ptr<Function> operator+(std::shared_ptr<Function> f, double n)
    {
        return std::make_shared<Sum>(f, std::make_shared<Constant>(n));
    }
    std::shared_ptr<Function> operator+(std::shared_ptr<Function> f, std::shared_ptr<Function> g)
    {
        return std::make_shared<Sum>(f, g);
    }

    std::shared_ptr<Function> operator*(double n, std::shared_ptr<Function> g)
    {
        return std::make_shared<Multiplication>(std::make_shared<Constant>(n), g);
    }
    std::shared_ptr<Function> operator*(std::shared_ptr<Function> f, double n)
    {
        return std::make_shared<Multiplication>(f, std::make_shared<Constant>(n));
    }
    std::shared_ptr<Function> operator*(std::shared_ptr<Function> f, std::shared_ptr<Function> g)
    {
        return std::make_shared<Multiplication>(f, g);
    }

}