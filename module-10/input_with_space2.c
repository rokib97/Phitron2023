#include<stdio.h>
#include<string.h>

int main(){

    char a[100];
    // gets(a);
    // printf("%s",a);
    fgets(a,19,stdin);
    a[10] ='\0';
    printf("%s",a);
    return 0;
}