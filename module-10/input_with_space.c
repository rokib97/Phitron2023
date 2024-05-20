#include<stdio.h>
#include<string.h>

int main(){

    char ch[100];
    // gets(ch);
    // printf("%s",ch);
    fgets(ch,15,stdin);
    ch[13] ='\0';
    printf("%s",ch);

    return 0;
}