#ifndef CALCULUS_HPP_
#define CALCULUS_HPP_

#include "core/base_functions/linear.hpp"

namespace Ontology
{

    class Calculus
    {
    public:
        static std::shared_ptr<Function> create_variable();
        static std::shared_ptr<Function> create_constant(const double);
    };

}

#endif