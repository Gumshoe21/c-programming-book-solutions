#include <stdio.h>

int main(void)
{
	float loan = 0, interest = 0, monthly = 0;
	float balance_after_first = 0, balance_after_second = 0, balance_after_third = 0;
	
	printf("Enter amount of loan: ");
	scanf("%f", &loan);

	printf("Enter interest rate: ");
	scanf("%f", &interest);

	printf("Enter monthly payment: ");
	scanf("%f", &monthly);

	interest = interest / 100 / 12;

	loan = loan - monthly + (loan * interest);	
	balance_after_first = loan;



	loan = loan - monthly + (loan * interest);	
	balance_after_second = loan;


	loan = loan - monthly + (loan * interest);	
	balance_after_third = loan;

	printf("Balance remaining after first payment: %f\n", balance_after_first);
	printf("Balance remaining after second payment: %f\n", balance_after_second);
	printf("Balance remaining after third payment: %f\n", balance_after_third);
}