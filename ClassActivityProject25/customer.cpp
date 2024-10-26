#include <iostream>

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

     void Customer::Address::displayAddress() {
        std::cout << "Street: " << street << std::endl;
        std::cout << "City: " << city << std::endl;
        std::cout << "ZIP Code: " << zipCode << std::endl;
    }

    void Customer::displayCustomer() {
        std::cout << "\nCustomer Details:" << std::endl;
        std::cout << "ID: " << id << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Email: " << email << std::endl;
        std::cout << "Address:" << std::endl;
        address.displayAddress();
    }
}