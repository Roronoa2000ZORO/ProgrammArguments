#include "maths.hpp"
using namespace std;
// Задание 1
// Написать программу которая будет выполнять арифметические операция с данными переданными ей через аргументы командной строки
// результат работы сообщается на консоль
// Задание 2
// Ввести необязательный ключ full при наличии которого надо вывести решение всей формулой а не только результатом
// Задание 3
// Если ключём 4 будет не full а ключ under нужно вывести разложение операции в примитивном виде
// пример
// 4 * 5
// 4 + 4 + 4 + 4 + 4 = 5

int main(int vcount, char **commands) {
	int firstNum, lastNum;
	char operation;
	if (InCorrectNum(commands[1])) {
		return 2;
	}
	if (InCorrectNum(commands[3])) {
		return 3;
	}
	if (InCorrectOper(commands[2][0])) {
		return 4;
	}
	if (vcount < 5) { // Задание 1
	cout << Result(stoi(commands[1]), stoi(commands[3]), commands[2][0]) << endl;
	}

	if (vcount == 5) {
		string key = commands[4];
		if (InCorrectkey(key)) {
			return 5;
		}
		if (key == "full") { // Задание 2
			cout << commands[1] << " " << commands[2][0] << " " << commands[3];
			cout << " = " << Result(stoi(commands[1]), stoi(commands[3]), commands[2][0]) << endl;
		}
		else if (key == "under") { // Задание 3
			for (size_t i = 0; i < stoi(commands[3]); i++) {
				if (i == stoi(commands[3]) - 1) {
					cout << commands[1];
				}else {
					cout << commands[1] << " + ";	
				}
			}
			cout << " = " << Result(stoi(commands[1]), stoi(commands[3]), commands[2][0]) << endl;
		}
	}
	

    return 0;
}