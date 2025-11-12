#include <stdio.h>
int main(){
    float a,b,max;
    scanf("%f%f",&a,&b);
    max = a;
    if (max<b) max=b;
    printf("%6.2f",max);
}