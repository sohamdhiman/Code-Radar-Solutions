#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if (a==1){
        if(b>=18){
            printf("Eligible");
        }
        else{
            printf("Not Eligible");
        }
    }
    else if(a==0){
        printf("Not Eligible");
    }
    else{
        printf("");
    }
    return 0;
}