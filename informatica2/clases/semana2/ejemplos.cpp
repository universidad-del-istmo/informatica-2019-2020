#include <stdio.h>

int fibonacci(int n){

    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }else{
        return fibonacci(n-1) + fibonacci(n - 2);
    }
}

int fibonacciCiclo(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    
    int n1 = 1;
    int n2 = 0;
    
    while(n-- > 1){
        const int tmp = n1;
        n1 = n1 + n2;
        n2 = tmp;
    }
    
    return n1;
}

int mcdAux(const int n1, const int n2, const int contador){
    
    const int divisor = n1 - contador;
    
    if(n1 % divisor == 0
        && n2 % divisor == 0){
        
        return divisor;
    }else{
        return mcdAux(n1, n2, contador + 1);
    }
}

int mcd(const int n1, const int n2){
    if(n1 > n2){
        return mcdAux(n2, n1, 0);
    }else{
        return mcdAux(n1, n2, 0);
    }
}

int main()
{
    int x = 4;
    printf("x: %i\n", x);
    printf("x: %i\n", x);
    int y = x++;
    printf("y: %i\n", y);
    x = x * x;
    printf("x: %i\n", x);
    printf("fibonacci %i\n", fibonacci(8));
    printf("fibonacci ciclico %i\n", fibonacciCiclo(8));
    printf("mcd %i \n", mcd(35, 14));

    return 0;
}
