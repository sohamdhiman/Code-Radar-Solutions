// #include<stdio.h>
// int main(){
//     int a=0;
//     for (int i=1;i<=10;i++){
//         a+=i;
//     }
// printf("%d",a);
// }
// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     for (int i=1;i<=10;i++){
//         printf(" %d*%d=%d ",a,i,(a*i));
//     }
// }
// #include<stdio.h>
// int main(){
//     int a,n;
//     scanf("%d %d",&a,&n);
//     for (int i=1;i<=n;i++){
//         printf(" %d*%d=%d \n",a,i,(a*i));
//     }
// }
// #include<stdio.h>
// int main(){
//     int a;
//     int b=1;
//     scanf("%d",&a);
//     for (int i=1;i<=a;i++){
//         b=b*i;
//     }
//     printf("%d",b);
// }
// #include <stdio.h>

// int main() {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     if((a*a)=b){
//         printf("Yes");
//     }
//     else{
//         printf("No");
//     }
//     return 0;
// }
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