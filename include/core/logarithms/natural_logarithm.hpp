#ifndef ONTOLOGY_CORE_LOGARITHMS_NATURAL_LOGARITHM_HPP
#define ONTOLOGY_CORE_LOGARITHMS_NATURAL_LOGARITHM_HPP

#include <cmath>
#include "../function.hpp"

namespace Ontology::Core
{

    class NaturalLogarithm : public Function
    {
    public:
        NaturalLogarithm(const std::shared_ptr<Function> u) : u(u){};
        virtual double compute(const double);
        virtual std::shared_ptr<Function> derive();

    private:
        const std::shared_ptr<Function> u;
    };

}

#endif