#include <stdio.h>

int main() {
    const int a = 5;
    const int b = -2;
    const int c = 3;
    double y;
    
    printf("Вхідні дані: a=%.1d, b=%1.d, c=%1.d\n" ,a ,b ,c);

    int tern1 = (3 * a - 4 * b + 5 * c) / (a * b) + (2 * b * c) + (3 * a * c);
    int tern2 = (a * b) - c / 4.0;
    
    y = tern1 - tern2;

    printf("Результат обчислення функції y = %.4lf\n", y);

    return 0;
}