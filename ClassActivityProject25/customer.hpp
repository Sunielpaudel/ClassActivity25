#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <string>
#include "Address.hpp"

namespace customerNamespace {

    struct Customer {
        int id;
        std::string name;
        std::string email;
        Address address; 
    };

}

#endif  CUSTOMER_HPP