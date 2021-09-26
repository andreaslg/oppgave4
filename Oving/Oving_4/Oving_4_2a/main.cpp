#include <iostream>


int main()
{
    int a;
    int b;

    std::cout << "Tall a: ";
    std::cin >> a;
    std::cout<< std::endl;

    std::cout << "Tall b: ";
    std::cin >> b;
    std::cout<< std::endl;

    int* ptrA = &a;
    int* ptrB = &b;

    std::cout << "a er: " << *ptrA <<" ("<<ptrA<<")" <<std::endl;
    std::cout << "b er: " << *ptrB <<" ("<<ptrB<<")" <<std::endl;

    return 0;
}
