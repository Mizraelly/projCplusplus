#include <iostream>
using namespace std;
template <typename T>
void Swap(T(&a), T(&b));
void sw(int* a, int* b) 
{
    cout << "swapping..." << endl;
    int temp = *b;
    *b = *a;
    *a = temp;
}

int main()
{
    cout << "enter first string:";
    string a, b;
    cin >> a;
    cout << "enter second string:";
    cin >> b;
    Swap(a, b);

    cout << "first string:" << a << endl;
    cout << "second string:" << b;
}

template <typename T>
void Swap(T(&a), T(&b))
{
    cout << "swapping..." << endl;
    T temp = a;
    a = b;
    b = temp;
};