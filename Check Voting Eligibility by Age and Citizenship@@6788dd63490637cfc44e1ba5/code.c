#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if (b==1){
        if(a>=18){
            printf("Eligible");
        }
        else{
            printf("Not Eligible");
        }
    }
    else if(b==0){
        printf("Not Eligible");
    }
    else{
        printf("");
    }
    return 0;
}