#include<stdio.h>
int main(){
    int i,j,k,n;
    scanf("%d", &n);
    for(i=0; i<=n; i=i+1){
        for(j=0; j<=n-i; j=j+1){
            printf(" ");
        }
        for(k=0; k<=i; k=k+1){
            printf("1");
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
*/
