#include <stdio.h>
int main(){
    int i=1,n,S=0;
    scanf("%d",&n);
    while (i<=n){
        S=S+i;
        i++;
    }
    printf("%d",S);
    return 0;
}