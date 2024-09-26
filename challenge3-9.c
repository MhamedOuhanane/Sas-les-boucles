#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i = 1, n,a ;
    do
    {
    printf("Entrer un entier positif : ");
    scanf("%d",&n);
    } while (n < 0);
    a = n/10;
    while (a > 0)
    {
        a = a / 10;
        i++;
    }
    printf("Le nombre de chiffres dans %d est : %d",n,i);
    return 0;
}
