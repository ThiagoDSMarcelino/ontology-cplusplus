#ifndef CALCULUS_HPP
#define CALCULUS_HPP

#include <cmath>
#include "./BaseFunctions/Linear.hpp"

namespace Ontology
{

    class Calculus
    {
    public:
        static std::shared_ptr<Function> x();
        static std::shared_ptr<Function> k(const double);
        static std::shared_ptr<Function> pi();
        static std::shared_ptr<Function> euler();

    private:
        static std::shared_ptr<Linear> linear_ptr;
        static std::shared_ptr<Constant> constant_ptr;
        static std::shared_ptr<Constant> pi_ptr;
        static std::shared_ptr<Constant> euler_ptr;
    };

}

#endif