/**
 * @mainpage
 *
 * Основи документування. Лабораторна робота №8.1.
 Вступ до документації коду
 * @author Andryckevych Yuliia
 * @date 19-dec-2021
 * @version 1.0
 *
 */

/**
 *@file main.c
 *@brief Файл з реалізацією функціоналу програми лабораторної роботи
**/ 
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * @param a, b, c Числа
 * {@link int} змінна яка буде показувати НСД\n
 * {@link result} змінна у функції {@link main} що відображує результат роботи программи
 * @return успішний код повернення з програми (0)
**/
int count(int a, int b, int c);
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
return 0;
}
int count(int a, int b, int c)
{
	while (b)
	{
	c = a % b;
	a = b;
	b = c;
	}

return a;
} 
/**
 * {@link array} змінна яка буде показувати НСД\n
 * {@link result} змінна у функції {@link main} що відображує результат роботи>
 * @return успішний код повернення з програми (0)
**/
