#include<stdio.h>
int main(){
    int i,j,k,l,n;
    scanf("%d", &n);
    for(i=0; i<=n; i=i+1){
        for(j=0; j<i; j=j+1){
            printf(" ");
        }
        for(k=0; k<n-i; k=k+1){
            printf("1");
        }
        for(l=0; l<=n-i; l=l+1){
            printf("1");
        }
        printf("\n");
    }
    return 0;
}

/*
Output:

  1111111
   11111
    111
     1
*/

