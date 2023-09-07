#ifndef CALCULUS_HPP
#define CALCULUS_HPP

#include "./BaseFunctions/Linear.hpp"
#include "./BaseFunctions/Constant.hpp"

namespace Ontology
{

class Calculus
{
    public:
        static std::shared_ptr<Function> x();
        static std::shared_ptr<Function> k(double x);

    private:
        static std::shared_ptr<Linear> _linear;
        static std::shared_ptr<Constant> _constant;
};

}

#endif