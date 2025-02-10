
#include <stdio.h>
int main() {
    int a,b,d;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if(c=='+'){
        d=a + b;
        printf("%d",d);
    }
    else if(c=='-'){
        d=a - b;
        printf("%d",d);
    }
    else if(c=='*'){
        d=a * b;
        printf("%d",d);
    }
    else if(c=='/'){
        float e;
        if (b==0){
            printf("");
        }
        else{
            e=a / b;
            printf("%.0f",e);
        }
    }
    else{
        printf("Invalid");
    }
    return 0;
}