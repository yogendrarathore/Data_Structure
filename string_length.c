// wap to find string length by user defined function
#include <stdio.h>
//function to find length of string
int strlen(char *p)
{
    int count = 0;
    while(*p!='\0')
    {
        count++;
        p++;
    }
    return count;
}
// driver code
int main()
{
    char str[1000];
    printf("Enter a string :");
    scanf("%s",str);
    int len=strlen(str);
    printf("Length of the string is : %d",len);
    return 0;
}