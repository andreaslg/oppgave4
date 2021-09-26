#include <iostream>


int main()
{

    // INPUT ARRAY
    int lengde(10);
    int array[lengde];

    for (int i(0); i < lengde ; i++)
    {
        std::cout << "Legg inn tall "<< i+1 << ": ";
        std::cin>>array[i];
    };


    // OUTPUT ARRAY
    std::cout << "[";
    for (int i(0); i < lengde ; i++)
    {
        std::cout << array[i] << " ";
    };
    std::cout <<"]"<< std::endl;


    // INPUT COMPARE NUMBER
    int forslag;
    std::cout << "Nummer som skal sammenlignes med: ";
    std::cin >> forslag;

    int antallLike(0);
    for (int i(0); i < lengde; i++)
    {
        if (array[i] == forslag)
            antallLike++;
    };


    // OUTPUT NUMMER EQUALS
    std::cout << "Antall "<<forslag <<" i array er "<<antallLike<< std::endl;
    return 0;
}
