#include <iostream>
#include <array>

void pekerProgram()
{
    int fortiTo(42);
    std::cout << "Tallet er: " << fortiTo << std::endl;

    int* fortiToAdr;
    fortiToAdr=&fortiTo; // Bruker &-operatoren
    std::cout << "Adressen er: "<<fortiToAdr << std::endl;

    const int mittArrayLengde(10);
    int mittArray[mittArrayLengde] = {0,1,2,3,4,5,6,7,8,9};

    for (int i(0); i<mittArrayLengde;i++)
    {
        int tall = mittArray[i];
        int* tallAdr = &mittArray[i];
        std::cout << "Tall nr. " << i+1 << ": " << tall <<" ("<< tallAdr<<")" << std::endl;
        // Øker med 4 byte (pga. int er 32-bit på dette systemet)
    };

};

int main()
{
    pekerProgram();
     return 0;
}
