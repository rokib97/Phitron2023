#include<stdio.h>
#include<string.h>
int main(){

    char ch[100];
    gets(ch);
    int count =0;
    int i=0;
    while(ch[i]!='\0'){
        count++;
        i++;
    }
    int len = strlen(ch);
    printf("%d",len);

    // for(int i=0; ch[i]!='\0'; i++){
    //     count++;
    // }

    // printf("%s\n",ch);
    // printf("%d",count);
    return 0;
}