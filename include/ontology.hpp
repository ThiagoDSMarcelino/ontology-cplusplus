#ifndef ONTOLOGY_ONTOLOGY_HPP
#define ONTOLOGY_ONTOLOGY_HPP

#include "core/linear.hpp"
#include "core/logarithms/logarithm.hpp"
#include "core/logarithms/natural_logarithm.hpp"
#include "core/trigonometry/sine.hpp"
#include "core/trigonometry/cosine.hpp"

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