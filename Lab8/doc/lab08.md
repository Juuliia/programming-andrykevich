﻿# **Лабораторна робота № 8. Основи документування. Функції**
## **1 ВИМОГИ**
### **1.1 Розробник**
- Андрікевич Юлія Василівна;
- студентка групи КІТ-121г;
- 20-гру-2021.
### **1.2 Загальне завдання**
### Переробити програми, що були розроблені під час виконання лабораторних робіт з тем“Масиви” та “Цикли” таким чином, щоб використовувалися функції для обчислення результату.Функції повинні задовольняти основну їх причетність - уникати дублювання коду. Тому,для демонстрації роботи, ваша програма (функція main()) повинна мати можливість викликатирозроблену функцію з різними вхідними даними
### **1.3 Індивідуальне завдання**
## 1. реалізувати функцію, що визначає, скільки серед заданої послідовності чисел таких пар, укотрих перше число менше наступного, використовуючи функцію з варіативною кількістюаргументів.Наприклад, при вхідних даних { 3, 2, 4, 3, 1 }, результат повинен бути 3 (тобтонаступні пари чисел: 3, 2, 4, 3, 3, 1)
## **2 ОПИС ПРОГРАМИ**
### **2.1 Функціональне призначення**
Програма призначена для виведення НСД. 

При генерації чисел діють наступні варіанти:

- Генеруються рандомно  ;
- Вказуються в дебагері; 

Результат зберігається у змінній а.

Демонстрація знайдених результатів передбачає покрокове виконання програми в режимі налагодження.
### **2.2 Опис логічної структури**
Задаємо змінні, які будуть зберігати наші числа.

Під час генерації чисел:

- Буде відбуватися рандомно, якщо не задати числа самому, використовуючи команду 

srandom(time(NULL));

`	`int a = rand();

`	`int b = rand();;

- Також їх можна задати в коді, або ж за допомогою r (число) (число)
- Для цього використано наступні команди

int main(int arcg, char \*\*argv)

a =(int)strtod(argv[1], 0);

b =(int)strtod(argv[2], 0);

- Опис розроблених структур і функцій наводиться на базі результатів роботи системи автодокументування Doxygen.
####
#### **2.2.1 Функція розрахунку НСД**
int count(int a, int b, int c){

`	`while (b){

`	`c = a % b;

`	`a = b;

`	`b = c;

`	`}return a;

} Призначення: розрахунок НСД.

Опис роботи: функція бере задані числа, та проводить математичні дії.

#### **2.2.2 Функція виводу результату.**
Аргументи: 

- a – число, також відображає кінцевий результат;
- b – число.

#### **2.2.3 Основна функція**
`        `int main() 

Призначення: головна функція.

Опис роботи: 

- введення змінних ;
- генерація чисел;
- вивід даних;
- повертає функція код повернення з програми (0).

#### **2.2.4 Структура проекту**
`        `└── lab08

`            `├

`            `├── Doxyfile

`            `├── Makefile

`            `├── README.md

`            `├── doc

`            `│   ├── lab08.pdf

`            `│   ├── lab08.docx

`            `│   └── lab08.md

`            `├── src

`            `│   ├

`            `│   ├

`            `│   └── main.c

`            `└── 




### **2.3 Важливі фрагменти програми**
#### **2.3.1 Структура int count**
int count(int a, int b, int c)

{

`	`while (b)

`	`{

`	`c = a % b;

`	`a = b;

`	`b = c;

`	`}

return a;

}        
#### **2.3.2 Початкові дані. Константи, перерахування**
` `int count(int a, int b, int c);

int main(int arcg, char \*\*argv)

{

`	`int a, b, c;

`	`if(arcg == 1)

`	`{

`	`srandom(time(NULL));

`	`int a = rand();

`	`int b = rand();

`	`}

`	`else

`	`{

`	`a =(int)strtod(argv[1], 0);

`	`b =(int)strtod(argv[2], 0);

`	`}

return 0;

}
#### **2.3.3 Генерація чисел**
`        `int a, b, c;

`	`if(arcg == 1)

`	`{

`	`srandom(time(NULL));

`	`int a = rand();

`	`int b = rand();

`	`}

`	`else

`	`{

`	`a =(int)strtod(argv[1], 0);

`	`b =(int)strtod(argv[2], 0);


##
## ` `**ВАРІАНТ ВИКОРИСТАННЯ**
Для демонстрації результатів кожної задачі використовується:

- покрокове виконання програми в утиліті lldb;
- видача результатів у консоль за допомогою функції виводу.

Варіант використання 1: послідовність дій для запуску програми у режимі відлагодження:

- запустити програму у відлагоднику lldb;
- поставити точку зупинки на функції main (строка з return 0;);
- запустити програму;
- подивитись результати виконання програми, оглядаючи значення змінної а

`        `-> 48       return 0;

`           `49   }

`        `Target 0: (main.bin) stopped.

`        `(lldb) p a

`        `(a [10]) $0 = 12

)

`        `}
## **ВИСНОВКИ**
При виконанні даної лабораторної роботи було набуто практичного досвіду роботи із рандомним заданням чисел random(), використання argv та arcg.
