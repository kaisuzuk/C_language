#include <stdio.h>

int won, lost;		// 現時点での勝ち数、負け数
float ratio;		// 勝率

int main() {
	won = 5;
	lost = 3;
	// キャストしなかった場合
	ratio = won / (won+lost) * 100.0;
	printf("%d勝%d敗, 勝率%f%%\n", won, lost, ratio);

	// キャストした場合
	ratio = ((float) won)/ ((float) won + (float) lost) * 100.0;
	printf("%d勝%d敗, 勝率%f%%\n", won, lost, ratio);
	return 0;
}