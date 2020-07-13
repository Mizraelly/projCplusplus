#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <ctime>
using namespace std;

int** createArray(const int rows, const int cols);
void fillArray(int** arr, const int rows ,const int cols);
void printArray(int** arr, const int rows , const int cols);
void copyArray(int** ofArr, int** atArr, const int rows , const int cols);
void delArray(int**& arr,const int rows);

int* createArray(const int size);
void fillArray(int* arr, const int size);
void push_front(int*& arr, int& size , int value);
void push_back(int*& arr, int& size , int value);
void printArray(int* arr, const int size);
void delArray(int*& arr);
#endif // !HEADER_H

