#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a.isupper){
        printf("Uppercase");
    }
    else if(a.islower){
        printf("Lowercase");
    }
    return 0;
}