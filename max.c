#include <stdio.h>

int max3(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= c)
        return b;
    else
        return c;
}

int boucle_while(int i)
{
    while (i < 10)
    {   
        if (i == 5) break ;
        printf("%d\n", i);
        i++;
    }
}

int boucle_for(){
    for ( int i = 0; i < 10; i++ ){
        if (i == 5) continue ;
        printf("%d\n", i);
    }
}

int main(){
    int a = 3;
    int b = 5;
    int c = 4;
    int i = 0;
    int max = ( a>=b && a >= c) ? a : (b >= c) ? b : c;
    printf("%d\n", max3(a, b, c));
    printf("%d\n", max);
    
    printf("boucle_for\n");
    boucle_for();

    printf("boucle_while\n");
    boucle_while(i);
}