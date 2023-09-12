#ifndef CALCULUS_HPP_
#define CALCULUS_HPP_

#include "core/linear.hpp"

namespace Ontology
{

    class Calculus
    {
    public:
        static std::shared_ptr<Core::Function> create_variable();
        static std::shared_ptr<Core::Function> create_constant(const double);
    };

}

#endif