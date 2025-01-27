#include <stdio.h>

int main(void)
{
	int amount = 0, twenties = 0, tens = 0, fives = 0, ones = 0;

	printf("Enter a dollar amount: ");
	scanf("%d", &amount);

	while (amount != 0) {

		if (amount >= 20) {
			twenties += amount / 20;
			amount -= 20 * (amount/20);
		}
		else if (amount >= 10 && amount < 20) {
			tens += amount / 10;
			amount -= 10 * (amount/10);
		}
		else if (amount >= 5 && amount < 10) {
			fives += amount / 5;
			amount -= 5 * (amount/5);
		}
		else {
			ones += amount;
			amount = 0;
		}

	}

	printf("twenties: %d\n", twenties);
	printf("tens: %d\n", tens);
	printf("fives: %d\n", fives);
	printf("ones: %d\n", ones);

	return 0;
}