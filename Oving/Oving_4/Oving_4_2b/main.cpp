#include <iostream>


int main()
{
    int n;
    std::cout << "Hvor mange tall?";
    std::cin >> n;

    int data[n];

    for (int i(0); i<n;i++)
    {
        std::cout << "Tall nr. " << i+1 << ": ";
        std::cin >> data[i];
    };

    int max(0);
    for (int i(0); i<=n; i++)
    {
        if (data[i] > max)
        {
            max=data[i];
        };
    };

    int *dataPtr = &max;

    std::cout << "Lagerst value is "<< *dataPtr << std::endl;

    return 0;
};
