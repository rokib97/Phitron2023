#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){

    char s[1001];
    scanf("%s",s);
    bool isPalindrome = true;
    int i=0,j=strlen(s)-1;
    while(i<j){
        if(s[i]!=s[j]){
            isPalindrome =false;
            break;
        }
        i++;
        j--;
    }
    if (isPalindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}