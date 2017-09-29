#include "Facade/Renter.h"

namespace GoF {

    namespace Facade {

        Renter::Renter()
        { }

        Renter::Renter(int _age, const std::string & _name, const std::string & _identity)
            : age(_age),
              name(_name),
              identity(_identity)
        { }

        int Renter::getAge() const
        {
            return age;
        }

        std::string Renter::getName() const
        {
            return name;
        }

        std::string Renter::getIdentity() const
        {
            return identity;
        }

    }

}
