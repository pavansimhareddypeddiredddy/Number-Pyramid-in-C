#include<stdio.h>
int main(){
    int i,j,k,l,n,m,o,p,a;
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
        for(k=0; k<n-i; k=k+1){
            printf(" ");
        }
        for(l=0; l<=n-i; l=l+1){
            printf(" ");
        }
        for(k=0; k<i-3; k=k+1){
            printf("1");
        }
        for(l=0; l<=i-3; l=l+1){
            printf("1");
        }
        printf("\n");
    }

    for(i=0; i<=n/2; i=i+1){
        for(m=0; m<=n-m; m=m+1){
            printf(" ");
        }
        for(o=0; o<=n; o++){
            printf("1");
        }
        for(p=0; p<=l; p++){
            printf(" ");
        }
        for(p=0; p<l; p++){
            printf("1");
        }
        printf("\n");
    }
    for(i=0; i<=n; i=i+1){
        for(a=0; a<=n; a++){
            printf("1");
        }
        for(a=0; a<=n; a++){
            printf("1");
        }
        for(a=0; a<=n; a++){
            printf("1");
        }
        for(a=0; a<=n-4; a++){
            printf("1");
        }
        printf("\n");
    }
    return 0;
}

