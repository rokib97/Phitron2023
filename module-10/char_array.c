#include<stdio.h>
#include<string.h>

int main(){

    // char ch[5];
    // for(int i=0; i<5; i++){
    //     scanf("%c",&ch[i]);
    // }
    // for(int i=0; i<5; i++){
    //     printf("%c",ch[i]);
    // }

    int arr[5];
    int size = sizeof(arr)/ sizeof(int);
    // printf("%d",size);

    char ch[5];
    int char_size = sizeof(ch)/sizeof(char);
    printf("%d",char_size);

    return 0;
}