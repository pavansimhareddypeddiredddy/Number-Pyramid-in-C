#include<stdio.h>
int main(){
    int i,j,k,l,n,m,o,p;
    scanf("%d", &n);
    for(i=0; i<=n; i=i+1){
        for(j=0; j<n-i; j=j+1){
            printf(" ");
        }
        for(k=0; k<i; k=k+1){
            printf("1");
        }
        for(l=0; l<=i; l=l+1){
            printf("1");
        }
        printf("\n");
    }

    for(i=0; i<=n; i=i+1){
        for(m=0; m<i; m=m+1){
            printf(" ");
        }
        for(o=0; o<n-i; o=o+1){
            printf("1");
        }
        for(p=0; p<=n-i; p=p+1){
            printf("1");
        }
        printf("\n");
    }
    return 0;
}

/*
Output:
     1
    111
   11111
  1111111
  1111111
   11111
    111
     1
*/



