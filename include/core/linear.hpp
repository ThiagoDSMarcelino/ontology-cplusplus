#ifndef ONTOLOGY_CORE_LINEAR_HPP
#define ONTOLOGY_CORE_LINEAR_HPP

#include "constant.hpp"

namespace Ontology::Core
{

    class Linear : public Function
    {
    public:
        virtual double compute(const double);
        virtual std::shared_ptr<Function> derive();
    };

}

#endif