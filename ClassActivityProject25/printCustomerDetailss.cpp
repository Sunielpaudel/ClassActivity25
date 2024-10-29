#include <iostream>
#include <string>

namespace customerNamespace {

    struct Address {
        std::string street;
        std::string city;
        int zipCode;
    };

    struct Customer {
        int id;
        std::string name;
        std::string email;
        Address address;
    };

    void printCustomerDetails(const Customer& customer) {
        std::cout << "Customer ID: " << customer.id << std::endl;
        std::cout << "Name: " << customer.name << std::endl;
        std::cout << "Email: " << customer.email << std::endl;
        std::cout << "Street: " << customer.address.street << std::endl;
        std::cout << "City: " << customer.address.city << std::endl;
        std::cout << "Zip Code: " << customer.address.zipCode << std::endl;
    }

} 