#ifndef ONTOLOGY_CORE_TRIGONOMETRY_SINE_HPP
#define ONTOLOGY_CORE_TRIGONOMETRY_SINE_HPP

#include <cmath>
#include "../function.hpp"
#include "../../ontology.hpp"

namespace Ontology::Core
{

    class Sine : public Function
    {
    public:
        Sine(const std::shared_ptr<Function> u) : u(u){};
        virtual double compute(const double);
        virtual std::shared_ptr<Function> derive();

    private:
        const std::shared_ptr<Function> u;
    };

}

#endif