#include <iostream>
#include "forCustomer.hpp"

using namespace CustomerStructNamespace;

int main() {
    Customer customer;

    std::cout << "Enter Customer ID: ";
    std::cin >> customer.id;

    std::cin.ignore(); 

    std::cout << "Enter Customer Name: ";
    std::getline(std::cin, customer.name);

    std::cout << "Enter Customer Email: ";
    std::getline(std::cin, customer.email);

    std::cout << "Enter Street Address: ";
    std::getline(std::cin, customer.address.street);

    std::cout << "Enter City: ";
    std::getline(std::cin, customer.address.city);

    std::cout << "Enter ZIP Code: ";
    std::cin >> customer.address.zipCode;

    customer.displayCustomer();

    return 0;
}