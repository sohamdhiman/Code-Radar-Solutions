#include <stdio.h>
int main() {
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c){
        printf("%d",a);
    }
    else if(b>a&&b>c){
        printf("%d",b);
    }
    else if(c>b&&c>a){
        printf("%d",c);
    }
    else{
        printf("")
    }
    return 0;
}