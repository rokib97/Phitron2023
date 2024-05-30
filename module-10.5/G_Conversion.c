#include<stdio.h>
#include<string.h>
int main(){

    char words[100001];
    scanf("%s",words);
    for(int i=0; i<strlen(words);i++){
        if(words[i]==','){
            words[i] = ' ';
        }else if(words[i]>='a' && words[i]<='z'){
            words[i] = words[i] - 32;
        }else if(words[i]>='A' && words[i]<='Z'){
            words[i] = words[i] + 32;
        }
    }
    printf("%s\n",words);
    return 0;
}