#include"header.h"
int checkpalindrome(char *str)
{
    int i,c=0,n;
    n=strlen(str);
	for(i=0;i<n/2;i++)
    {
    	if(str[i]==str[n-i-1])
    	c++;

 	}
 	if(c==i)
        return 1;
    else
        return 0;

 }



