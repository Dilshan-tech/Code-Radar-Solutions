#include<stdio.h>
int main() {
    int a,b,c;
    float d;
    scanf("%d",&a);
    printf("\t");
    scanf("%d",&b);
    printf("\t");
    scanf("%d",&c);
    d=(a+b+c)/3.0;
    printf("Average: %.2f",d);
    return 0;
}