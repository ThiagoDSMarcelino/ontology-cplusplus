#ifndef ONTOLOGY_HPP_
#define ONTOLOGY_HPP_

#include "core/linear.hpp"
#include "core/logarithm.hpp"
#include "core/natural_logarithm.hpp"

namespace Ontology
{

    std::shared_ptr<Core::Function> create_variable();
    std::shared_ptr<Core::Function> create_constant(const double);

    std::shared_ptr<Core::Function> log(const double, const double);
    std::shared_ptr<Core::Function> log(const std::shared_ptr<Core::Function>, const double);
    std::shared_ptr<Core::Function> log(const double, const std::shared_ptr<Core::Function>);
    std::shared_ptr<Core::Function> log(const std::shared_ptr<Core::Function>, const std::shared_ptr<Core::Function>);

    std::shared_ptr<Core::Function> ln(const double);
    std::shared_ptr<Core::Function> ln(const std::shared_ptr<Core::Function>);

}

#endif