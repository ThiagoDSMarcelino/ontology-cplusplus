#ifndef CALCULUS_HPP
#define CALCULUS_HPP

#include "./BaseFunctions/Linear.hpp"

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