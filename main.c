/*#include <stdio.h>
int main()
{
    printf("Hello World");
}*/
#include <stdio.h>                                                      //if else statement
int main()
{
    int a,b;
    printf("Enter the value of a & b : ");
    scanf("%d%d",&a,&b);
    if (a > b)
    {
        printf("a is greater than b");
    }
    else
    {
        printf("b is greater than a");
    }

    return 0;
}
