#include <iostream>

void printArray(int arrayInp[], int length)
{
    for (int i(0); i < length ; i++)
    {
    std::cout << arrayInp[i] << " ";
    };
    std::cout << std::endl;
};


int main()
{
    int array[6]={1,2,3,4,5,6};

    printArray(array, 6);

    int usrNum;
    int usrIdx;

    std::cout << "Nytt tall: ";
    std::cin >> usrNum;

    std::cout << "Hvilken indeks: ";
    std::cin >> usrIdx;
    usrIdx--;

    int temp[6];
    for (int i(0); i < 6 ; i++)
    {

        if (i < usrIdx)
        {
            temp[i] =array[i];
        }
        else if (i ==  usrIdx)
        {
            temp[i] = usrNum;
        }
        else if (i > usrIdx)
            temp[i] = array[i-1];
    };


    for (int i(0); i< 6; i++)
        array[i]=temp[i];


    printArray(array, 6);

    return 0;
}
