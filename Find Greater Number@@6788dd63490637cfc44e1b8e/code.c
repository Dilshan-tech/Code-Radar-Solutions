#include<stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    printf("\t");
    printf("%d",&b);
    if(b>a){
        printf("%d",b);
    }
    else{
        printf("%d",a);
    }
    return 0;
}