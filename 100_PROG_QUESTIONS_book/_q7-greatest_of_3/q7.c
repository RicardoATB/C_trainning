/* Book solutions 'C Programming - Beginner to Expert in 100 questions (Ansh Narad)'
 * Question: Write a program to find the greatest of 3 numbers  */

#include <stdio.h>

int main (void)
{
	int a, b, c, greatest;

	printf("Enter 3 numbers:\n");
	scanf("%d %d %d", &a, &b, &c);

	if (a > b)
		greatest = a;
	else
		greatest = b;

	if (greatest < c)
		greatest = c;

	printf("greatest is %d\n", greatest);
	
	return 0;
}
