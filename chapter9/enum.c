#include <stdio.h>

int main() {
	typedef int week_day;
	enum week_day {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
	week_day today = WEDNESDAY;
	printf("%d\n", today);
	return (0);
}