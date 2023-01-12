#ifndef MATHS_HPP
#define MATHS_HPP

#include <iostream>
#include <string>
using namespace std;

//Получение результата введенных данных
float Result(long long FN, long long LN, char operation);

//Проверка корректности ввода числа
bool InCorrectNum(char *num);
//Проверка корректности ввода ареф. оператора
bool InCorrectOper(char sign);
//Проверка корректности ввода спец. ключа
bool InCorrectkey(string key);
#endif // !MATHS_HPP

