#include<stdio.h>

int main(){

    // int a[5]={10,20,30,40,50};
    // char a[5]={'R','o','k','i','b'};
    // char a[5]="Rokib";
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%c\n",a[i]);
    // }
    

    char ch[]="Rokib\0";
    printf("%d",sizeof(ch)/sizeof(char));
    // printf("%s",ch);
    
    return 0;
}