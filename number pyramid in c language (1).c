#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d", &n);
    for(i=0; i<=n; i=i+1){
        for(j=0; j<=i; j=j+1){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


/*
Output:
   1
   11
   111
   1111
   11111
*/
