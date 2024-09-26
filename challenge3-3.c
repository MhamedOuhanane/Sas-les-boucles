#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n , i, s;
    printf("Entrer un nombre entier positif : ");
    scanf("%d",&n);
    if (n < 0)
    {
        printf("imposiblr...Le nombre saisi est negative");
    }
    else
    {
        s = 0;
        for ( i = 1; i <= n; i++)
        {
            s += i;
        }
        
        printf("la somme des %d premiers nombres naturels est : s = %d ",n,s);
    }
    
    return 0;
}
