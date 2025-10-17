#include <stdio.h>

void sumult(int* x, int* y)
{
    int sum = *x + *y;
    int mul = *x * *y;
    *x = sum;
    *y = mul;
}

int main()
{
    int a = 3;
    int b = 4;
    int c = a;
    int d = b;
    sumult(&a, &b);
    printf("%d + %d = %d\n", c, d, a);
    printf("%d x %d = %d\n", c, d, b);
}

/* // swap1.c

void swap1(int x, int y)
{
    int tmp = 0;
    tmp = x;
    x = y;
    y = tmp;
}

int main()
{
    int a = 1;
    int b = 2;

    printf("AVANT : a = %d, b = %d\n", a, b);
    swap1(a, b);
    printf("APRES : a = %d, b = %d\n", a, b);
    return 0;
}

*/

// swap2.c

// void swap2(int *x, int *y)
// {
//     int tmp=0;
//     tmp = *x;
//     *x = *y;
//     *y = tmp;
// }

// int main()
// {
//     int a = 1;
//     int b = 2;

//     printf("AVANT : a = %d, b = %d\n", a, b);
//     swap2(&a, &b);
//     printf("APRES : a = %d, b = %d\n", a, b);
//     return 0;
// }