#ifndef CALCULUS_HPP
#define CALCULUS_HPP

#include "Linear.hpp"
#include <memory>

namespace Ontology
{

class Calculus
{
    public:
        static Linear x();

    private:
        static std::shared_ptr<Linear> _linear;
};

}

#endif