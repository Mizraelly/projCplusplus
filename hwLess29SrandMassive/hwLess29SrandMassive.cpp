// hwLess29SrandMassive.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//1)генератор уникальных чисел
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    const int SIZE = 10;
    int mas[SIZE];
    srand(time(NULL));
    //init rand num in mass
    for (int i = 0; i < SIZE; i++)
    {
        mas[i] = rand() % 30;
        for (int j = 0; j < i; j++)
        {     
                if (mas[j] == mas[i])
                {
                    mas[i] = rand() % 30;
                    j = -1;
                }            
        }
    }
        
    //cout mass
    cout << "mas:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << mas[i] << endl;
    }
    //2)найти минимальный елемент масива
    int minEl = mas[0];
    for (int i = 0; i < SIZE; i++) 
    {
        if (minEl > mas[i]) minEl = mas[i];
    }
    cout << "Min element :" << minEl << endl;
     
    
}


