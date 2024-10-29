# Customer Address Management Project

This project demonstrates the use of *nested structures* in C++ to model a customer and their address information. The project is organized with separate header (.hpp) and implementation (.cpp) files for modularity, and it uses a custom namespace to encapsulate the structures and functions.

## Project Structure

The project consists of the following components:

- **Address structure**: Represents a customer's address, containing the street, city, and zip code.
- **Customer structure**: Contains information about a customer, including ID, name, email, and an Address structure as a nested member.
- **printCustomerDetails function**: Prints the details of a Customer, including address information.
- **Namespace customerNamespace**: Encapsulates all structures and functions to avoid naming conflicts.

## File Organization

- **Address.hpp**: Declares the Address structure.
- **Customer.hpp**: Declares the Customer structure, which includes Address as a nested member.
- **printCustomerDetailss.hpp**: Declares the printCustomerDetails function.
- **printCustomerDetailss.cpp**: Implements the printCustomerDetails function without including .hpp files, as per the project requirement.
- **main.cpp**: Initializes a Customer object with address information and calls printCustomerDetails.

## File Contents

| File                     | Description                                                                                       |
|--------------------------|---------------------------------------------------------------------------------------------------|
| Address.hpp            | Defines the Address structure with fields for street, city, and zip code.                       |
| Customer.hpp           | Defines the Customer structure with fields for ID, name, email, and nested Address.           |
| printCustomerDetails.hpp | Declares the function for printing all Customer details.                                      |
| printCustomerDetails.cpp | Implements the printCustomerDetails function, accessing Customer and Address members.     |
| main.cpp               | Main driver that creates a Customer and outputs details.                                        |


## Purpose

This project demonstrates:

- *Nested Structure*: Address is nested within Customer, illustrating C++ nesting concepts.
- *Modular Code Organization*: Separate files for each structure and function with .hpp and .cpp separation.
- *Namespace Usage*: Encapsulates all related code within customerNamespace to prevent naming conflicts.

## Screenshots
![Screenshot (21)](https://github.com/user-attachments/assets/901d205b-73ff-4d41-8646-877a0fcb6ef1)

## Author 
**.Kailash Paudel**

**.10897677.cc.peralta.edu**



