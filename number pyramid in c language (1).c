#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d", &n);
    for(i=1; i<=n; i=i+1){
        for(j=1; j<=i; j=j+1){
            printf("%d",j);
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
