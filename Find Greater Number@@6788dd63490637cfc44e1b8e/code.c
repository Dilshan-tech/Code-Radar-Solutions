#include<Stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    printf("\t");
    printf("%d",&b);
    if(a>b){
        printf("%d",a);
    }
    else{
        printf("%d",b);
    }
    return 0;
}