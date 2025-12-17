#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("Tong:%d\nHieu:%d\nTich:%d",a+b,a-b,a*b);
    if (b!=0){
        printf("\nThuong:%.0d",a/b);
    }
    else{
        printf("Loi so b");
    }
    return 0;
}