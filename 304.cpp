#include <stdio.h>
int main(){
    double g,k,t,ct,st;
    scanf("%lf%lf%lf",&g,&k,&t);
    ct=g*k;
    st=ct+(ct*t/100);
    printf("%lf",st);
}