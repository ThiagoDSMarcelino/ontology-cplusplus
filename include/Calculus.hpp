#ifndef CALCULUS_HPP
#define CALCULUS_HPP

#include <cmath>
#include "./BaseFunctions/Linear.hpp"
#include "./BaseFunctions/Constant.hpp"

namespace Ontology
{

    class Calculus
    {
    public:
        static std::shared_ptr<Function> x();
        static std::shared_ptr<Function> k(double x);
        static std::shared_ptr<Function> pi();
        static std::shared_ptr<Function> euler();

    private:
        static std::shared_ptr<Linear> _linear;
        static std::shared_ptr<Constant> _constant;
        static std::shared_ptr<Constant> _pi;
        static std::shared_ptr<Constant> _euler;
    };
    
}

#endif