// primes.c

#include <stdio.h>
#include <math.h>

double sqrt(double arg){
    return sqrt(arg);
}

int isprime(int p){
    for ( int i = 2; i < p; i++ ){
        if (p % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n = 100000;
    int s = 0;
    for ( int i = 2; i < n; i++ ){
        s += isprime(i);
    }
    printf("%d\n", s);
}