#include "maths.hpp"
using namespace std;
// ������� 1
// �������� ��������� ������� ����� ��������� �������������� �������� � ������� ����������� �� ����� ��������� ��������� ������
// ��������� ������ ���������� �� �������
// ������� 2
// ������ �������������� ���� full ��� ������� �������� ���� ������� ������� ���� �������� � �� ������ �����������
// ������� 3
// ���� ������ 4 ����� �� full � ���� under ����� ������� ���������� �������� � ����������� ����
// ������
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
	if (vcount < 5) { // ������� 1
	cout << Result(stoi(commands[1]), stoi(commands[3]), commands[2][0]) << endl;
	}

	if (vcount == 5) {
		string key = commands[4];
		if (InCorrectkey(key)) {
			return 5;
		}
		if (key == "full") { // ������� 2
			cout << commands[1] << " " << commands[2][0] << " " << commands[3];
			cout << " = " << Result(stoi(commands[1]), stoi(commands[3]), commands[2][0]) << endl;
		}
		else if (key == "under") { // ������� 3
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