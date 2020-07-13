 /*1)Разработать программу, которая выводит на экран линию из символов.
Число символов, какой использовать символ, и какая будет линия - вертикальная, или горизонтальная - указывает пользователь.*/
#include <iostream>
using namespace std;
int main()
{
    std::cout << "enter '1' if you want to start prog.one, or '2' - prog.two:";
    int proj = 0;
    std::cin >> proj;

    if (proj == 1) {
        int numSimb = 0;
        char simb;
        char figSimb;
        do {
            std::cout << "Enter any number of simbols , or enter '404' if you want to exit program:";
            std::cin >> numSimb;
            if (numSimb == 404) exit(404);

            std::cout << "Enter simbol:";
            std::cin >> simb;

            std::cout << "Enter figure simbol 'V' or 'v' - vertival or 'H' - horizontal:";
            std::cin >> figSimb;

            while (numSimb > 0)
            {
                if (figSimb == 'V' || figSimb == 'v')
                {
                    std::cout << simb << endl;
                }
                else if (figSimb == 'H' || figSimb == 'h')
                {
                    std::cout << simb;
                }
                else
                {
                    std::cout << "you enter invalid figure of simbol!" <<std::endl;
                    exit(404);
                }
                --numSimb;
            }
        } while (numSimb != 404);
    }
   /* 2)Написать программу, которая находит сумму всех целых нечетных чисел в диапазоне, указанном пользователе.*/
    else if (proj == 2)
    {
        int startNum, endNum , summ = 0;
        do {
            std::cout << "Enter start range of nubmer , which you want to summation:";
            std::cin >> startNum;
            std::cout << "Enter end range of nubmer , which you want to summation:";
            std::cin >> endNum;
            while (endNum > startNum)
            {
                if (endNum %2 != 0)summ += endNum;  
                --endNum;
            }
            std::cout << "Summa:"<<summ << std::endl;
            summ = 0;
        }while (endNum != 404);
    }
}

