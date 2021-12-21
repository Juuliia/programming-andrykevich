#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 25 //

int main()
{
	int num =123456;
	int a = 0;
	int n6 = a % 10;
    	int n5 = a / 10 % 10;
   	int n4 = a / 100 % 10;
	int n3 = a / 1000 % 10;
	int n2 = a / 10000 % 10;
	int n1 = a / 100000 % 10;
	double num1 = n1 + n2 + n3;
	double num2 = n4 + n5 + n6;
	double numr = num1 / num2;
	if (numr = 1.0)
	{
		int a = 1;
	}
	else
	{
		int a = 0;
	}
	return 0;
}
