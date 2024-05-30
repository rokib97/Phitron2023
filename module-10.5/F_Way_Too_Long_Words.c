#include<stdio.h>
#include<string.h>

int main(){

    int n;
    scanf("%d",&n);
    char words[n][101];
    for(int i=0; i<n; i++){
         scanf("%s",words[i]);
    }
    for(int i=0; i<n; i++){
        int len = strlen(words[i]);
        if(len > 10){
            char first_char = words[i][0];
            int num_of_char = len - 2;
            char last_char = words[i][len-1];
            printf("%c%d%c\n",first_char,num_of_char,last_char); 
        }else{
            printf("%s\n",words[i]);
        }
    }
    
    
    return 0;
}