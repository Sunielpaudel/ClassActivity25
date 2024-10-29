#include "Customer.hpp"
#include "printCustomerDetailss.hpp"

using namespace customerNamespace;

int main() {

    Customer customer = {
        1897,
        "John Smith",
        "smith.johnson@gmail.com",
        { "456 Center street", "Berkeley", 54321 }
    };

    printCustomerDetails(customer);

    return 0;
}