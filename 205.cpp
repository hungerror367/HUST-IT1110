#include<stdio.h>
int main(){
    int a,b,c,tong;
    float tb;
    scanf("%d%d%d",&a,&b,&c);
    tong = a+b+c;
    tb = tong/3;
    printf("%.d\n%f",tong,tb);
}