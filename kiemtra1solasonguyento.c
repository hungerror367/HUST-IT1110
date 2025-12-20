#include<stdio.h>
#include<math.h>
int main(){
    int n,i;
    scanf("%d",&n);
    if (n<2){
        printf("Loi n khong duoc nho hon 2");
        return 0;
    }else{
        for(i=2;i<=sqrt(n);i++){
            if (n%i==0){
                printf("%d deo phai so nguyen to",n);
                return 0;
            }
        }
    }
    printf("%d la so nguyen to",n);
    return 0;
}