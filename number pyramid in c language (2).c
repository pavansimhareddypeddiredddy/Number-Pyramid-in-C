#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d", &n);
    for(i=0; i<=n; i=i+1){
        for(j=0; j<=n-i; j=j+1){
            printf("1");
        }
        printf("\n");
    }
    return 0;
}


/*
Output:
     111111
     11111
     1111
     111
     11
     1
*/
