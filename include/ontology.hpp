#ifndef ONTOLOGY_ONTOLOGY_HPP
#define ONTOLOGY_ONTOLOGY_HPP

#include "core/linear.hpp"
#include "core/logarithm.hpp"
#include "core/natural_logarithm.hpp"
#include "core/sine.hpp"
#include "core/cosine.hpp"

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

    std::shared_ptr<Core::Function> sin(const double);
    std::shared_ptr<Core::Function> sin(const std::shared_ptr<Core::Function>);

    std::shared_ptr<Core::Function> cos(const double);
    std::shared_ptr<Core::Function> cos(const std::shared_ptr<Core::Function>);

}

#endif