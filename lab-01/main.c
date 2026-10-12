#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int zad1();
int zad2();
int zad3();

int main()
{
    setlocale(LC_ALL, "RUS");

    zad1();
    zad2();
    zad3();

    return 0;
}

int zad1()
{
    /* puts("Моя первая программа"); */
    /* puts("hello world"); */

    puts("Нажмите Enter для продолжения...");
    getchar();
    puts("Программа продолжилась");

    return 0;
}

int zad2()
{
    puts("Нажмите Enter для продолжения...");
    getchar();

    puts("*******************************************");
    puts("*                                         *");
    puts("* Тема: Разработка консольного приложения *");
    puts("*                                         *");
    puts("*       Выполнил Хром А.И. бИД-261        *");
    puts("*                                         *");
    puts("*******************************************");

    return 0;
}

int zad3()
{
    puts("Нажмите Enter для продолжения...");
    getchar();

    puts("Ну, ради прикола можно и дату вывести");
    puts("         _   _     _    ");
    puts("/| /|.  | | |_    | | /|");
    puts(" | -|.  |_|  _|.  |_| -|");

    return 0;
}
