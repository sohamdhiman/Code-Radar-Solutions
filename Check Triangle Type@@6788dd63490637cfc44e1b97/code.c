#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b&&a!=c)||(a==c&&a!=b)||(c==b&&a!=c){
        printf("Isosceles");
    }
    else if(a==b&&b==c){
        printf("Equilateral");
    }
    else{
        printf("Scalene");
    }
    return 0;
}