#include <iostream>
#include "person_class.h"
//#include "employee_class.h"
using namespace std;

int main()
{
    person_class    P;
    int             age;
    std::string     name;
    std::string     lastName;

    std::cout << "Enter your name: ";
    std::cin >> name;
    if (P.setName(name)) std::cout << "name OK"; else std::cout << "name KO" << std::endl;
    std::cout << "Enter your last name: ";
    std::cin >> lastName;
    if (P.setLastName(lastName)) std::cout << "last name OK"; else std::cout << "last name KO" << std::endl;
    std::cout << "Enter your age: ";
    std::cin >> age;
    if (P.setAge(age)) std::cout << "age OK"; else std::cout << "age KO";

    return 0;
}
