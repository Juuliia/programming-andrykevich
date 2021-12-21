
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 22 //

int main()
{
	int a = 36; //задамо числа//
	int b = 48;
	int c = 0;
	while (b){ //за допомогою цикла while// 
	c = a % b;
	a = b;
	b = c;
}
printf("%d", a);
return 0;
}

/*

int main()
   {
        int a = 36;
        int b = 48;
        int c = 0;
        do{ // за допомогою цікла do while//
        c = a % b;
        a = b;
        b = c;}
	while (b);

printf("%d", a);
return 0;
}

*/
 

/*
int main()
   {

 int n1 = 36;
 int n2 = 48;
 int i, gcd;


    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // перевіряємо чи є він нсд
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

   	

return 0;
    
} */
