#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter a number: ");
    scanf("%u", &x);

    switch (x)
    {
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
        break;
    default:
        printf("Sorry\n");
    }

    return 0;
}