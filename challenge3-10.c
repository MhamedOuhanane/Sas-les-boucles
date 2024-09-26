#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n, s,i;
    do
    {
        printf("Saisir un entier positif : ");
        scanf("%d",&n);
    } while (n <= 0);
    s = 0;
    for ( i = 1; i <= n; i++)
    {
        s += i;
    }
    printf("La somme des %d premiers nombre est s = %d",n,s);
    return 0;
}
