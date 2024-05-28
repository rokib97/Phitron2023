#include<stdio.h>

int main(){

    // char ch[]={'r','o','k','i','b'};
    char ch[6]="rokib"; // default null \0 is there thats why size 6
    printf("%d\n",sizeof(ch)/sizeof(char));
    printf("%s",ch);
    return 0;
}