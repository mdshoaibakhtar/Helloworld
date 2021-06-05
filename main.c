/*#include <stdio.h>
int main()
{
    printf("Hello World");
}
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
}*/
// multiplication table of given number
#include <stdio.h>
int main()
{
    int num;
    printf("Enter The Number\n");
    scanf("%d", &num);
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n", num, i, num * i);
    }

    return 0;
}
