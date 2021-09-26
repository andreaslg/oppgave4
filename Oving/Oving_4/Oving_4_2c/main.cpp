#include <iostream>


int main()
{
    int a;

    std::cout << "Legg inn verdi: ";
    std::cin >> a;

    int* aPtr = &a;

    std::cout << "Verdien er " << *aPtr << " og lagret i adressen " << aPtr << std::endl;

    return 0;
}
