#ifndef ONTOLOGY_CORE_COSINE_HPP
#define ONTOLOGY_CORE_COSINE_HPP

#include <cmath>
#include "function.hpp"
#include "../ontology.hpp"

namespace Ontology::Core
{

    class Cosine : public Function
    {
    public:
        Cosine(const std::shared_ptr<Function> u) : u(u){};
        virtual double compute(const double);
        virtual std::shared_ptr<Function> derive();

    private:
        const std::shared_ptr<Function> u;
    };

}

#endif