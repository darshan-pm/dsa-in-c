#include<stdio.h>
int fact(int n){
    if(n==0)
        return 1;
        else
            return n * fact(n - 1);           
}

int main(){
    int n = 9;
    printf("factorial of a number %d is %d", n, fact(n));
    return 0;
}