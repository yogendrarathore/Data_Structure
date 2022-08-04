#include <stdio.h>

int LinearSearch(int a[],int len,int key)
{
    int c;
    for ( c = 0 ; c < len ; c++ )
    {
        if ( a[c] == key )   /* if required element found */
        {
            return c;
        }
    }
    return -1;

}
int main()
{
    int array[100], search, i, number,value;
    printf("Enter the number of elements in array :");
    scanf("%d",&number);
    printf("Enter %d numbers\n", number);
    for ( i = 0 ; i < number ; i++ )
        scanf("%d",&array[i]);
    printf("Enter the number to be searched :");
    scanf("%d",&search);
    value=LinearSearch(array,number,search);
    value==-1?printf("Elemnet not found"):printf("Elemnet is found at %d",value);
    return 0;
}