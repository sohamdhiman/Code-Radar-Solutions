#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b&&a!=c&&b!=c)||(a==c&&a!=b&&b!=c)||(c==b&&a!=c&&b!=a){
        printf("Isosceles");
    }
    else if(a==b==c){
        printf("Equilateral");
    }
    else{
        printf("Scalene");
    }
    return 0;
}