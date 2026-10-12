#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int zad1(void);
int zad1a(void);
int zad1b(void);
int zad1v(void);
int zad2(void);
int zad3(void);

int main(void)
{
    setlocale(LC_ALL, "RUS");

    zad1();
    /* zad1a(); */
    /* zad1b(); */
    /* zad1v(); */
    /* zad2(); */
    /* zad3(); */

    return 0;
}

int zad1(void)
{
    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;

    printf("Символ: %c\n", c);
    printf("Целое число: %d\n", i);
    printf("Число float: %f\n", f);
    printf("Число double: %e\n", d);

    printf("\nВведите символ: ");
    scanf(" %c", &c);

    printf("Введите целое число: ");
    scanf("%d", &i);

    printf("Введите число float: ");
    scanf("%f", &f);

    printf("Введите число double: ");
    scanf("%lf", &d);

    printf("\nВведённые значения:\n");
    printf("%c\n", c);
    printf("%d\n", i);
    printf("%f\n", f);
    printf("%e\n", d);

    return 0;
}

int zad1a(void)
{
    float a;
    int b;
    float c;

    printf("Введите вещественное число: ");
    if (scanf("%f", &a) != 1)
        return 1;

    b = (int)a;
    c = a - b;

    printf("Целая часть: %d\n", b);
    printf("Дробная часть: %f\n", c);

    return 0;
}

int zad1b(void)
{
    char c;

    printf("Введите символ: ");
    if (scanf(" %c", &c) != 1)
        return 1;

    printf("Десятичный код: %d\n", (unsigned char)c);
    printf("Шестнадцатеричный код: %X\n", (unsigned char)c);

    return 0;
}

int zad1v(void)
{
    int i;

    printf("Введите целое число i: ");
    if (scanf("%d", &i) != 1)
        return 1;

    if (i != 0)
        printf("1/i = %f\n", 1.0 / i);
    else
        printf("На ноль делить нельзя.\n");

    return 0;
}

int zad2(void)
{
    int a = 11;
    int b = 3;
    int x;
    float y;
    double z;

    x = a / b;
    y = a / b;
    z = a / b;

    printf("a = %d, b = %d\n", a, b);
    printf("x = %d\n", x);
    printf("y = %f\n", y);
    printf("z = %f\n", z);

    printf("\nЯвное преобразование:\n");
    printf("float: %f\n", (float)a / b);
    printf("double: %f\n", (double)a / b);

    printf("\nПреобразование после целочисленного деления:\n");
    printf("%f\n", (float)(a / b));

    return 0;
}

int zad3(void)
{
    int n;
    int last;
    int first;
    int middle;
    int sum;
    int reverse;

    printf("Введите положительное трёхзначное число: ");
    if (scanf("%d", &n) != 1)
        return 1;

    if (n < 100 || n > 999)
    {
        printf("Введите положительное трёхзначное число.\n");
        return 0;
    }

    last = n % 10;
    first = n / 100;
    middle = (n / 10) % 10;

    sum = first + middle + last;
    reverse = last * 100 + middle * 10 + first;

    printf("Последняя цифра: %d\n", last);
    printf("Первая цифра: %d\n", first);
    printf("Сумма цифр: %d\n", sum);
    printf("Число наоборот: %d\n", reverse);

    return 0;
}
