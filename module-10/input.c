#include<stdio.h>

int main(){

    char ch[6]; //extra one for \0
    scanf("%s",ch); //its okay beacuse ch[5] itself a address. 
    // scanf("%s",&ch);
    // printf("%d",sizeof(ch)/sizeof(char));
    printf("%s",ch);
    return 0;
}