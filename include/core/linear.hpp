#ifndef CORE_LINEAR_HPP_
#define CORE_LINEAR_HPP_

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