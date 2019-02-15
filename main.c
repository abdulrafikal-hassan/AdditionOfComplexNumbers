
//A program to find the sum of complex numbers and output the sum
#include<stdio.h>

struct complex
{
	int realpart, imaginary;
};

	int main()
{
	struct complex a, b, c;
	printf("Please enter a value of \'a'\ and \'b\' complex number a + b.\n");
	printf("value of complex number a is = ");
	scanf("%d", &a.realpart);
	printf("value of complex number b is = ");
	scanf("%d", &a.imaginary);
	printf("value of complex number c is = ");
	scanf("%d", &b.realpart);
	printf("value of complex number d is =");
	scanf("%d", &b.imaginary);
	c.realpart = a.realpart + b.realpart;
	c.imaginary = a.imaginary + b.imaginary;
	if (c.imaginary >= 0) {
		printf("Complex numbers sum is = %f + %di\n", c.realpart, c.imaginary);
		}  else {
			printf("complex sum = %d %di\n", c.realpart, c.imaginary);
		  }
		return 0;
}
