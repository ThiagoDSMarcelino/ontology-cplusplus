#include "../include/Function.hpp"

namespace Ontology
{

    std::shared_ptr<Function> Function::operator-()
    {
        return std::make_shared<Negative>(shared_from_this());
    }

    std::shared_ptr<Function> Function::operator-(const std::shared_ptr<Function> other)
    {
        return std::make_shared<Sum>(shared_from_this(), -*other);
    }
    
    std::shared_ptr<Function> Function::operator+(const std::shared_ptr<Function> other)
    {
        return std::make_shared<Sum>(shared_from_this(), other);
    }

    std::shared_ptr<Function> Function::operator*(const std::shared_ptr<Function> other)
    {
        return std::make_shared<Multiplication>(shared_from_this(), other);
    }

}