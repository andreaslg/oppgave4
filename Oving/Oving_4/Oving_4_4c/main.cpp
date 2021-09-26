#include <iostream>

void minPrint(const char* tekst, int lengde)
{
    for (int i(0); i < lengde; i++)
    {
        std::cout << tekst[i];
    };
    std::cout << std::endl;
};

int main()
{

    const char minString[]="Andreas";

    int lengde = sizeof (minString);

    minPrint(minString, lengde);


    char temp[lengde];
    for (int i(0); i <lengde; i++)
    {
        if (i==0)
            temp[lengde-1] = minString[lengde-1];
        else
            temp[i-1] = minString[lengde-i-1];
    };

    minPrint(temp, lengde);

    return 0;
}
