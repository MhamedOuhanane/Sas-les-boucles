#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n ,i ,p;
    printf("Saisir un nombre entier positif : ");
    scanf("%d",&n);
    if (n >= 0)
    {
        p = 1;
        for ( i = 1; i <= n; i++)
        {
            p *= i;
        }
        printf("Le factorielle de %d est %d! = %d",n,n,p);
    }
    else
        printf("le nombre chois est negative.");
    
    return 0;
}
