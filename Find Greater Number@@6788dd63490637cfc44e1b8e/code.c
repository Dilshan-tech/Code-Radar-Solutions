#include<Stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    printf("\t");
    printf("%d",&b);
    if(a>b){
        printf("\n%d",a);
    }
    else{
        printf("\n%d",b);
    }
    return 0;
}