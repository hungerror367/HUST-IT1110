#include <stdio.h>
#define pi 3.14159
int main(){
    double r,M,S;
    scanf("%lf",&r);
    if (r<0)
    {
        printf("ERROR");
    }
    else{
        M=2*pi*r;
        S=pi*r*r;
        printf("%lf\n%lf",M,S);
    }
}