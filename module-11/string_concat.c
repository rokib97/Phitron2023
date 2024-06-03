#include<stdio.h>
#include<string.h>
int main(){

    char a[200],b[100];
    scanf("%s %s",a,b);
    int k = strlen(a);
    printf("%d\n",strlen(b));
    for(int i=0; i<=strlen(b)-4; i++){
        a[k] = b[i];
        k++;
    }
    a[k]='\0';
    // strcat(a,b);
    printf("%s %s",a,b);
    return 0;
}