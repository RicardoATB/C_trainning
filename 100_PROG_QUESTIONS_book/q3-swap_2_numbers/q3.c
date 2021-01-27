/* Book solutions 'C Programming - Beginner to Expert in 100 questions (Ansh Narad)'
 * Question: Write a program to swap 2 numbers using a temporary variable */

#include <stdio.h>

int main (void)
{
	int a = 10;
	int b = 20;
	int temp;

	printf("Values before swaping a=%d, b=%d\n", a, b);
	temp = a;
	a = b;
	b = temp;
	printf("Values before swaping a=%d, b=%d\n", a, b);
	
	return 0;
}
