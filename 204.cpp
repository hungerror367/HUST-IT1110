#include <stdio.h>
int main(){
    float a,b,max;
    scanf("%f%f",&a,&b);
    max=(a>b)?a:b;
    printf("%6.2f",max);
}