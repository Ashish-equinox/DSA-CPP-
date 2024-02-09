#include<stdio.h>
#include<string.h>

int main(){
    // char userInput[100];

    // printf("enter a string:");
    // gets(userInput);
    // printf("you entered: %s\n",userInput);
    // printf("length of given string:%d\n",strlen(userInput));

    char str1[100]="Mangekyo", str2[100]="Sharingan";
    char str3[100];
    int i=0,j=0;
    printf("\nFirst str:%s",str1);
    printf("\nsecond str:%s",str2);

    while(str1[i] != "\0"){
        str3[j]=str1[i];
        i++;
        j++;
    }
    i=0;

    while(str2[i] != "\0"){
        str3[j]=str2[i];
        i++;
        j++;
    }
    str3[j]='\0';
    printf("concatenated string is: %s",str3);
    return 0;
}