#include <stdio.h>

int main() {
    int num1; 
    int num2;

    printf("Введіть перше ціле число:");
    scanf("%d" , &num1);
    
    printf("Введіть друге ціле число:");
    scanf("%d" ,&num2);

    int remainder = num1 % num2;
     
    int difference = num1 - num2;
     
    int sum_square = (num1 + num2) * (num1 + num2);

    printf("Залишок від ділення:%d\n",remainder);
    printf("Різниця :%d\n", difference);
    printf("Квадрат суми: %d\n", sum_square);

    return 0;                                                                                                                                                     
}