#include<stdio.h>
#include<string.h>
int main(){

    // char ch[6];

    // ch[0]='h';
    // ch[1]='e';
    // ch[2]='l';
    // ch[3]='l';
    // ch[4]='o';
    // char ch[6] = "Hello";
    // char ch[6] ={'h','e','l','l','o'};
    // printf("%s",ch);

    char ch[7];
    // scanf("%s",ch);
    // gets(ch);
    fgets(ch,sizeof(ch)/sizeof(char),stdin);
    printf("%s\n",ch);
    printf("length: %d\n",strlen(ch));
    printf("Size: %d",sizeof(ch)/sizeof(char));
    return 0;
}