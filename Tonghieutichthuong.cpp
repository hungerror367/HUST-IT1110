#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("Tong:%d\nHieu:%d\nTich:%d",a+b,a-b,a*b);
    if (b!=0){
        printf("\nThuong:%d",a/b);
    }
    else{
        printf("\nLoi so b");
    }
    return 0;
}
