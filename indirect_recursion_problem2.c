// Question no.2:Write a program to print numbers 1 to 10 in such a way that when number is odd  → print it multiplied by 2 when number is even → print it divided by 2.

#include<stdio.h>
void odd();
void even();
int n = 2;

void even(){
    if(n<=10){
        printf("%d ", n / 2);
        n++;
        odd();
    }
    return;
}
void odd(){
    if(n<=10){
        printf("%d ", n * 2);
        n++;
        even();
    }
    return;
}
int main(){
    even();
    return 0;
}