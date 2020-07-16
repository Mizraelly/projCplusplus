#include <iostream>
using namespace std;

int Factorial(int N);
void Swap(int* a, int* b);
void showInfo(int(*foo)(int) , int arg);
int getSimb(int num);

int Factorial(int N) 
{
    if (N == 1) return 1;
    else if (N == 0) return 1;
    return N * Factorial(N - 1);
}
void Swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


int getSimb(int num)
{
    return num;
}

void showInfo(int(*foo)( int ) , int arg )
{
    cout << foo(arg) << endl;
}

int main()
{
    // function pointer
    /*int(*foo)(int) = getSimb;
    showInfo(foo, 5);*/

    //string concatination
   /* string a, b, c;
    a = "hello";
    b = "world";
    cout << a + ' ' +  b << endl;*/
    

    /*int a = 5;
    int b = 6;
    cout << "a = " << a << " b = " << b << endl;
    Swap(&a, &b);
    cout << "a = " << a << " b = " << b << endl;*/

    /*setlocale(LC_ALL, "Rus");
    int a;
    do {       
        cout << "введите значение факториала:";
        cin >> a;
        cout << "факториал " << a << " равен:" << Factorial(a) << endl;
    } while (a != 404);*/
   
    system("pause");
}


