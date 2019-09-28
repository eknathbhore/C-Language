
        
#include<stdio.h>
void main()
{
	int number, temp, digit1, digit2, digit3;

	printf("Printing all Armstrong numbers between 1 and 500:\n\n");

	number = 001;

	while (number <= 500)
	{
		digit1 = number%10;
		digit2 = (number%100) - ((number/100)*10);
		digit3 = number%1000;

		temp = (digit1*digit1*digit1) + (digit2*digit2*digit2) + (digit3*digit3*digit3);

		if (temp == number)
		{
			printf("\nAmstrong Number:%d", temp);
		}

		number++;
	}
}	
