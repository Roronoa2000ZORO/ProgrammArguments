#include"maths.hpp"

float Result(long long FN, long long LN, char Operator) {
    float sum;
	switch (Operator){
	case '+':
		sum = FN + LN;
		return sum;
	case '-':
		sum = FN - LN;
		return sum;
	case '*':
		sum = FN * LN;
		return sum;
	case '/':
		sum = static_cast<float>(FN) / LN;
		return sum;
	case '%':
		sum = FN % LN;
		return sum;
	default:
		return 0;
	}
}

bool InCorrectNum(char *num) {
	int size = 0;
	for (int i = 0; num[i] != '\0'; i++) {
		size++;
	}
	bool correct;
	const char numbers[]{"0123456789"};
	for (size_t i = 0; i < size; i++) {
		for (size_t j = 0; j < 10; j++){
			if (num[i] == numbers[j]) {
				correct = false;
				break;
			}else {
				correct = true;
			}
		}
		if (correct == true) {
			return true;
		}
	}
	return false;
}

bool InCorrectOper(char sign) {
	const char tmp[] {"+-*/%"};
	for (size_t i = 0; i < 5; i++){
		if (sign == tmp[i]) {
			return false;
		}
	}
	return true;
}

bool InCorrectkey(string key) {
	if (key == "full") {
		return false;
	}else if (key == "under") {
		return false;
	}else {
		return true;
	}
}