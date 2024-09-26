#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i , a;
    printf("Donner un nombre a :");
    scanf("%d",&a);
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\t",a,i,a*i);
    }
    
    return 0;
}
