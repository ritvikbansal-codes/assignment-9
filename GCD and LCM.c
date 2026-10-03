#include <stdio.h>
void calculate(int a, int b, int *sum,int *diff, int *pro, float *quo)
{
    *sum = a + b;
    *diff = a - b;
    *pro = a * b;
    if (b != 0)
        *quo = (float)a / b;
}

int main()
{
    int a, b, sum, diff, pro;
    float quotient=0;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    calculate(a, b, &sum, &diff, &pro, &quotient);

    printf("Sum = %d\n Difference = %d\n Product = %d\n", sum, diff, pro);

    if (b != 0)
    printf("Quotient = %.2f\n", quotient);
    else
    
    printf("Division by zero is not possible.\n");
    return 0;
}