#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 26 //

int main(int arcg, char **argv)
{
	srand(time(NULL));
	int n;
	int a[n][n];
	int a1[n][n];
	int i, j, l;
	if(arcg == 1)
	{
        a[n][n] = rand();
	a1[n][n] = rand(); 
	}
	else
	{
	a[n][n] = (int)strtod(argv[1], 0);
	a1[n][n] = (int)strtod(argv[2], 0);
	}
	for(int i = 0; i < n; i++);
	for(int j = 0; j < n; j++);
	a[i][j] = i;
	for(int i = 0; i < n; i++);
        for(int j = 0; j < n; j++);
	{
	a1[i][j] = 0;
	for(int l = 0; l < n; l++);
	a1[i][j] = a1[i][j] + a[i][j]*a[l][j];

	}
return 0;
}
