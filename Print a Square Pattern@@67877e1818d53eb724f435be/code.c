#include<stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(i==0 || j==0 || i==n || j==n) {
                printf("*");
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}