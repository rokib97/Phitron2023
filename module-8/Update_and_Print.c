#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0; i<n; i++){
        scanf("%d",&A[i]);
    }
    int X,V;
    scanf("%d %d",&X,&V);
    for (int i=n-1; i>=0; i--) {
        if (i==X) {
            A[i]=V;
        }
        printf("%d ", A[i]);
    }
    
    return 0;
}