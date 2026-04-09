#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    double f;

    printf("Введіть першу зміну x :");
    scanf("%d", &x);
    
    printf("Введіть другу зміну y :");
    scanf("%d" ,&y);


    double term1 = x + y / pow(x, 2) + (x * y) + pow(y, 2);
    double term2 = x / 1 + pow(y, 2);
    double term3 = y / 1 + pow(x, 2);
    f = term1 + term2 + term3;
    
    printf("Задані значення: x = %d , y = %d\n" ,x , y);
    printf("Результат функцій f = %.4lf\n", f);
    
    return 0;
}