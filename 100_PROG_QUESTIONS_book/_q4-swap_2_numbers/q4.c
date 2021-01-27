/* Book solutions 'C Programming - Beginner to Expert in 100 questions (Ansh Narad)'
 * Question: Write a program to swap two numbers without using temporary variable */

#include <stdio.h>

int main (void)
{
	int a = 10;
	int b = 20;
	
	printf("Values before swapping a=%d, b=%d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("Values before swapping a=%d, b=%d\n", a, b);

	return 0;
}
