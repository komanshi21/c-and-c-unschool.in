#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,choice;
    printf("\n1.addition\n2.substraction\n3.multiplication\n4.division\n");
    printf("enter the operation:");
    scanf("%d",&choice);
    printf("number 1: ");
    scanf("%d",&a);
    printf("number 2: ");
    scanf("%d",&b);

    switch(choice)
    {
    case 1:
        printf("%d + %d = %d",a,b,a+b);
        break;

    case 2:
        printf("%d - %d = %d",a,b,a-b);
        break;

    case 3:
        printf("%d * %d = %d",a,b,a*b);
        break;

    case 4:
        printf("%d / %d = %d",a,b,a/b);
        break;
    }
       return 0;
}
