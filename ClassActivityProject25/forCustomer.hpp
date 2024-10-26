#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

namespace CustomerStructNamespace {

    struct Customer {
        int id;
        std::string name;
        std::string email;

        struct Address {
            std::string street;
            std::string city;
            int zipCode;

            void displayAddress();
        };

        Address address;
        void displayCustomer();
    };
}

#endif  CUSTOMER_H