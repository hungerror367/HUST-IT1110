#include <stdio.h>
#define Pi 3.14
int main(){
    double r,S,C;
    if(scanf("%lf",&r) != 1){
        printf("Input error\n");
        return 1;
    }
    if (r<=0){
        printf("Loi so lieu r\n");
    }
    else{
        S = Pi*r*r;
        C = 2*Pi*r;
        printf("Dien tich hinh tron: %.2lf\nChu vi hinh tron: %.2lf\n",S,C);
    }
    return 0;
}
