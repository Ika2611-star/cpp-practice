#include <cstdio>

int main(void)
{
    float a,b,sum;
    printf("input 2 floats: ");
    scanf("%f%f", &a, &b);
    printf("a=%f,b=%f\n", a, b);
    sum = a + b;
    printf("sum=%f\n\n", sum);
    return 0;
}