
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 22 //

int main(int arcg, char **argv)
{
	int a, b, c;
	if(arcg == 1)
	{
	srandom(time(NULL));
	int a = rand();
	int b = rand();
	}
	else
	{
	a =(int)strtod(argv[1], 0);
	b =(int)strtod(argv[2], 0);
	}
	while (b)
	{
	c = a % b;
	a = b;
	b = c;
	}

return 0;
}

/*

int main()
{
        int a = 36;
        int b = 48;
        int c = 0;
        do{
        c = a % b;
        a = b;
        b = c;}
	while (b);
}
printf("%d", a);
return 0;
}
*/
 
/*
	int a,b,c = 0;
	int n1, n2, n3;
	for(b = 18;b > b;b++);
	for(a = 30;a > a;a++);
{
	if(a<b){
	n1 = b - a;
	n2 = a - n1;
	n3 = n1 - n2;
	c = n3;
	if(n3 < 0){
	c = n3 * 01;
}}
	else
{
	n1 = a - b;
        n2 = b - n1;
        n3 = n1 - n2;
        c = n3;
        if(n3 < 0){
        c = n3 * 01;
}}
printf("%d", c);
return 0;
}

/*
	int a,b,c = 0;
        int n1, n2, n3;
        for(b = 82;b > b;b++);
        for(a = 112;a > a;a++);
{

	while (b){
        c = a % b;
        a = b;
        b = c;
}}
printf("%d", a);
return 0;
}


}


*/
