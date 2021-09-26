#include <iostream>
#include <QApplication>
#include <QtWidgets/QLabel>

QImage loadImage(char adresse[])
{
    QImage image;

    bool loaded = image.load(adresse);

    if (loaded)
    {std::cout << "Bilde ok" << std::endl;
    return image;
    }
    else
    {std::cout << "bildefeil" << std::endl;
    return image;
    };

};


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

        // Bilde duck:
        QImage image = loadImage("/home/andreas/projects/mas245/Oving/Oving_4/Oving_4_3b/duck.jpeg");
        QLabel bildeDuck;
        bildeDuck.setPixmap(QPixmap::fromImage(image));
        break;
    }
    case Svar::wd40:
    {
        std::cout << "Use oil" << std::endl;

        // Bilde oil can
        QImage image3 = loadImage("/home/andreas/projects/mas245/Oving/Oving_4/Oving_4_3b/oil_can.jpeg");
        QLabel bildeOilCan;
        bildeOilCan.setPixmap(QPixmap::fromImage(image3));

        break;
    }
    case Svar::ducktape:
    {
        std::cout << "Use duck tape" << std::endl;

        // Bilde ducktape
        QImage image2 = loadImage("/home/andreas/projects/mas245/Oving/Oving_4/Oving_4_3b/duck_tape.jpeg");
        QLabel bildeDucktape;
        bildeDucktape.setPixmap(QPixmap::fromImage(image2));

        break;
    }


    }
};



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    outPut(doesItMove());

    return a.exec();
}


