#include <stdio.h>
int result;			// 計算結果
int value = 5;		// 入力値

int fact(int number) {
	if (number == 0)
		return (1);
	// else
	return (number * fact(number - 1));
}

int main() {
	result = fact(5);
	printf("%dの階乗は、%d\n", value, result);
	return (0);
}
