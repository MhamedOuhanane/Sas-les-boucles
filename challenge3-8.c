#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i , n, f1, f0, f;
    do
    {
    printf("Entrer un entier n strectement positif : ");
    scanf("%d",&n);
    } while (n <= 0);
    printf("les %d premiers termes de la suite de Fibonacci sont : \nf(0) = 0, f(1) = 1",n);
    f0 = 0;
    f1 = 1; 
    for ( i = 2; i <= n; i++)
    {
        f = f0 + f1;
        f0 = f1;
        f1 = f;
        printf(", f(%d) = %d",i,f);
    }
    return 0;
}
