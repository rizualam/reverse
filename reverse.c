#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char a[20];
    int len,temp,i=0,mid;
    printf("please enter the string\n");
    gets(a);
    len=strlen(a);
    mid=len/2;
    while(i<mid)
    {
    temp=a[i];
    a[i]=a[len-1-i];
    a[len-1-i]=temp;
    i++;
    }
    puts(a);
 return 0;
}

