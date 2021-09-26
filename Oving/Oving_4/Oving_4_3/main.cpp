#include <iostream>


enum class Svar: uint
{noProblem, wd40, ducktape};


bool svarYesNo()
{
    start:
    char svar;
    std::cout << "[Y/N]";
    std::cin >> svar;

    if (svar == 'Y' || svar == 'y')
        return true;
    else if (svar == 'N' || svar == 'n')
        return false;
    else
    {
        std::cout << "Feil input" << std::endl;
        goto start;
    };
};

Svar doesItMove()
{
    std::cout << "Does it move?";
    if (svarYesNo())
    {
        std::cout << "Should it?";
        if (svarYesNo())
        {
            return Svar::noProblem;
        }
        else
        {
            return Svar::ducktape;
        };
    }
    else
    {
        std::cout << "Should it?";
        if (svarYesNo())
        {
            return Svar::wd40;
        }
        else
        {
            return Svar::noProblem;
        };
    };

};

void outPut(Svar input)
{
    switch (input)
    {
    case Svar::noProblem:
    {
        std::cout << "No problem" << std::endl;
        break;
    }
    case Svar::wd40:
    {
        std::cout << "Use oil" << std::endl;
        break;
    }
    case Svar::ducktape:
    {
        std::cout << "Use duck tape" << std::endl;
        break;
    }


    }
};



int main()
{
    start:
    outPut(doesItMove());

    goto start;
    return 0;
}
