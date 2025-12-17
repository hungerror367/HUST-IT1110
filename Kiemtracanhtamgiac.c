#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a>0 && b>0 && c>0 &&
        a+b>c &&
        a+c>b &&
        c+b>a){
        printf("Ba so vua nhap vao la canh cua mot tam giac");
        if(a==b && b==c){
            printf("\nLa mot tam giac deu");
        }
        else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
            printf("\nLa mot tam giac vuong");
        }
        else if(a == b || a == c || b == c){
            printf("\nLa mot tam giac can");
        }
        else{
            printf("\nLa mot tam giac thuong");
        }
    }else{
        printf("Ba so vua nhap vao khong phai canh cua mot tam giac");
    }
    return 0;
}
