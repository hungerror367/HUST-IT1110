#include<stdio.h>
int main(){
    int n;
    if(scanf("%d",&n) != 1){
        printf("Input error\n");
        return 1;
    }
    if(n%2==0){
        printf("n la so chan\n");
    }
    else{
        printf("n la so le\n");
    }
    return 0;
}
