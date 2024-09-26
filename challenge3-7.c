#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n, i, j, a, s;
    printf("Entrer un nombre entier : ");
    scanf("%d",&n);
    a = n/10;
    while (a != 0)
    {
        a /= 10;
        j++;
    }
    s = 0;
    a = n;
    for ( i = j; i >= 0; i--)
    {
       s += (a%10)*pow(10,i) ;
       a /= 10;
    }
    printf("L'inverce de %d est %d ",n,s);
    return 0;
}
