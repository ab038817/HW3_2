#include <stdio.h>
#include <stdlib.h>

int main()
{
char g;
scanf("%c",&g);


switch(g)
{
        case 'A' :
        case 'a':
        printf("100-94");
        break;

        case 'B':
        case 'b':
        printf("89.9-80");
        break;

        case 'C':
        case 'c':
        printf("79.9-70");
        break;

        case 'D':
        case 'd':
        printf("69.9-60");
        break;
        case 'F':
        case 'f':
        printf("50-0");
        break;
}


    return 0;
}
