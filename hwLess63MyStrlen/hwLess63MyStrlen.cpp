#include <iostream>
using namespace std;
#define SIZE 10
void myStrlen(const char* arr)
{
	int it = 0;
	for (int i = 0; arr[i] != '\0'; i++)
	{
		it++;
	}
	cout << it << endl;
}

int main()
{
	/*const char* str = "hello";
	const char s[] = {'j','l','\0'};
	myStrlen(s);*/
	int g[SIZE]{};
	int* arr = g;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i];
	}
	cout << "\nlink:" << arr;
}

