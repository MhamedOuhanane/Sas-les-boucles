#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n ,i =1,s = 1;
    do
    {
    printf("Entrer un entier strectement positif : ");
    scanf("%d",&n);
    } while (n <= 0);
    while (s <= n)
    {
        if (i % 2 != 0)
        {
            printf("%d, ",i);
            s++;
        }
        i++;
    }
    
    return 0;
}
