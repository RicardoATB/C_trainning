/* Book solutions 'C Programming - Beginner to Expert in 100 questions (Ansh Narad)'
 * Question: Write a program to find simple interest  */

#include <stdio.h>

int main (void)
{
	float p;
	float i;
	float t;
	printf("Enter principle, rate of interest and time:\n");
	scanf("%f\n%f\n%f", &p, &i, &t);
	printf("Simple interest is %f\n", (p*i*t)/100);
	
	return 0;
}
