concatenation of two strings without using module

#include<stdio.h>
void main()
{
    int i=0, j=0;
    char str1[100], str2[100], str3[100];
    printf("\n Enter the first string: ");
    gets(str1);
    printf("\n Enter the second string: ");
    gets(str2);

    while(str1[i] != '\0')
    {
        str3[j] = str1[i];
        i++;
        j++;
    }
    i=0;
    while(str2[i] != '\0')
    {
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';
    printf("\n the concatenation of the string is : ");
    puts(str3);
}
