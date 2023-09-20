/* Пузенко Артем Андрійович, група ТР-23, варіант № 19
 * Лабораторна робота №4. Програмування найпростіших обчислювальних алгоритмів лінійної структури */
#include <stdio.h> /* підмикання бібліотеки stdio.h; */
#include <stdlib.h> /* підмикання бібліотеки stdlib.h; */
#include <math.h> /* підмикання бібліотеки math.h; */
int main()
{
    float a, x; /* оголошення змінних a, x */
    const double const2 = 2; /* оголошення константи 2 */
    const double const4 = 4; /* оголошення константи 4 */
    const double const3 = 3; /* оголошення константи 3 */
    double y, z, t, y1; /* оголошення змінних y, z, t, y1 */
    printf("f1=1/2*((2x+a)/(4x-3))+|cosx|\n");
    printf("f2=3/4*x^3+9/5*x+4e^tg⁡(x-6)\n");
    printf("f3=3/5*x^3,3\n"); /* функція бібліотеки stdio.h для виведення у стандартний потік;
    символ керування \n переводить курсор на новий рядок */
    printf("Vvedit znachennia parametra a: ");
    scanf_s("%f", &a); /* функція бібліотеки stdio.h для введення у стандартний потік */
    printf("Vvedit znachennia zminnoi x: ");
    scanf_s("%f", &x);
    y = sqrt((const2 * x + a) / (const4 * x - const3)) + fabs(cos(x));
    printf("Znachennia pershoho vyrazu: %f\n", y); /* функція бібліотеки stdio.h для виведення у стандартний потік;
    код формату %f виводить дійсне десяткове число з фіксованою точкою; символ керування \n переводить курсор на новий рядок */
    z = x *x *(0.75 * x) + x * (1.8) + 4 * exp(tan(x - 6));
    printf("Znachennia druhoho vyrazu: %f\n", z);
    t = 3.0 / 5.0 * pow(x, 3.3);
    printf("Znachennia tretoho vyrazu: %f\n", t);
    y1 = y;
    y = z; /* Переприсвоєння y <- z */
    z = t; /* Переприсвоєння z <- t */
    t = y1; /* Переприсвоєння t <- y */
    printf("Znachennia pereprysvoiennoho vyrazu y: %5.2f\n", y);
    printf("Znachennia pereprysvoiennoho vyrazu z: %f\n", z);
    printf("Znachennia pereprysvoiennoho vyrazu t: %f\n", t);
    system("pause"); /* затримка екрана */
    return 0;
}
