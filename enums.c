#include <stdio.h>

int main(void)
{
	enum language {human = 100,
		animal,
		computer};
	enum days {SUN,
		MON,
		TUE,
		WED,
		THUR,
		FRI,
		SAT};
	printf("human: %d, animal: %d, computer: %d\n", human, animal, computer);

	printf("SUN: %d\n", SUN);
	printf("MON: %d\n", MON);
	printf("TUE: %d\n", TUE);
	printf("WED: %d\n", WED);
	printf("THUR: %d\n", THUR);
	printf("FRI: %d\n", FRI);
	printf("SAT: %d\n", SAT);

	return (0);
}
