#include "../Function.hpp"
#include "../BaseFunctions/Constant.hpp"

namespace Ontology
{
class Negative : public Function
{
    public:
        Negative(std::shared_ptr<Function> u);
        virtual double compute(double x);
        virtual std::unique_ptr<Function> derive();
    
    private:
        std::shared_ptr<Function> _u;
};

}