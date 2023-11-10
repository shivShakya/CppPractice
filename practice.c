#include<stdio.h>

void sum(int a , int b){
       int c = a + b;
       printf("Sum = %d" , c);
}

int main(){   
        int a = 5;
        int b = 6;
        sum(a ,b);

        sum(8,9);
        return 0 ;
}