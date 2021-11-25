#include"header.h"
#include<stdio.h>
int main()
{

    char str[10];

    printf("Enter  the string: ");
    scanf("%s",str);


    if(checkpalindrome(str))
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");



}
