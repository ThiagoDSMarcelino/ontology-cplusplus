#ifndef ONTOLOGY_CORE_LOGARITHMS_LOGARITHM_HPP
#define ONTOLOGY_CORE_LOGARITHMS_LOGARITHM_HPP

#include <cmath>
#include "../function.hpp"
#include "../../ontology.hpp"

namespace Ontology::Core
{

    class Logarithm : public Function
    {
    public:
        Logarithm(const std::shared_ptr<Function> u, std::shared_ptr<Function> a) : u(u), a(a){};
        virtual double compute(const double);
        virtual std::shared_ptr<Function> derive();

    private:
        const std::shared_ptr<Function> u;
        const std::shared_ptr<Function> a;
    };

}

#endif