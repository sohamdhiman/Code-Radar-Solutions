#include <stdio.h>
int main() {
    int a;
    if(a>0){
        printf("Positive");
    }
    else if(a<0){
        printf("Negative");
    }
    else if(a==0){
        printf("Zero");
    }
    else{
        printf("");
    }
    return 0;
}