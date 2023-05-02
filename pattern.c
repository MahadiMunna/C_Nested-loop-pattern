#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int k=n-1,s=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            printf(" ");
        }
        for(int j=0;j<s;j++){
            printf("*");
        }
        printf("\n");
        k--;
        s+=2;
    }
    k=1,s=s-4;
    for(int i=n;i<n*2-1;i++){
        for(int j=0;j<k;j++){
            printf(" ");
        }
        for(int j=0;j<s;j++){
            printf("*");
        }
        printf("\n");
        k++;
        s-=2;
    }
    return 0;
}