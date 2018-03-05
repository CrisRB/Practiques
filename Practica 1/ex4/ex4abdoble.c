#include <math.h>
#include <stdio.h>

void sumatoric(int);
void sumatorid(int);

int main()
{
    int n;
    
    printf("Nombre termes a sumar\n");
    scanf("%d",&n);
    
    sumatoric(n);
    sumatorid(n);   

    return 0;
}

void sumatoric(int n)
{
    double s=0;
    double igran=1;
    for(int i=1;i<n+1;i++)
    {
        s=s+(1/(igran*igran));
        igran=igran+1;
    }
    printf("El sumatori creixent és: %.16G\n",s);
}

void sumatorid(int n)
{
    double s=0;
    double igran=n;
    
    for(int i=n;1<i+1;i--)
    {
        s=s+(1/(igran*igran));
        igran=igran-1;
    }
    printf("El sumatori decreixent és: %.16G\n",s);
}