#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);

    if(a%5==0 && a%11==0)
    {
        printf("the number is divisible by 5 an 11");
    }
    else
    {
        printf("number is not divisible by 5 and 11");
    }

    return 0;
}
