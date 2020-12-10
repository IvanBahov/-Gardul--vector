/******************************************************************************
Gardul.
*******************************************************************************/
#include <stdio.h>
int i,h,n,numar=0,a[100],sc=0;

void calcul()
{
for (i=1; i<=n; i++)
    {
        if (a[i]<h) numar +=1;
        if (a[i]==0) { sc =1; break; }
    }
}

int main()
{
    printf("Indicati inaltimea lui Ionut h=");
    scanf("%d",&h);
    printf("Indicati numarul de scanduri n=");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        printf(" inaltimea %d scanduri=",i);
        scanf("%d",&a[i]);
    }
    calcul(numar);
    if (sc==0)
    printf("BRIO m-am aplicat la %d scanduri ca sa nu ma vada cainele",numar);
    else printf("PACAT nu ajung la prieten ");
    return 0;
}

