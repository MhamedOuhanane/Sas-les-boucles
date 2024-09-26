#include<stdio.h>
int main(int argc, char const *argv[])
{
    int base,exposant,p,i;
    printf("Entrer un nombre entier : ");
    scanf("%d",&base);
    printf("Donner la puissance : ");
    scanf("%d",&exposant);
    p = base;
    for ( i = 1; i < 4; i++)
    {
        p *= base;
    }
    printf("%d^%d = %d",base,exposant,p);
    return 0;
}
