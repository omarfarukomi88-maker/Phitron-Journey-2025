#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);         //array input nilam
    }

    int cnt[6]={0};         //count korar jonno akta array nilam,main array te joto maximum no ase toto porjonto

    for(int i=0;i<n;i++)    //main array er upor akta loop chalailam  
    {
        int value=ar[i];    //ar[i] ar value
        cnt[value]++;       //ar[i] er valu joto hobe  cnt[] array er toto no index 1 barabo;
    }
     for(int i=0;i<6;i++)
    {
        printf("%d->%d\n",i,cnt[i]);         //count array output korlam
    }

    return 0;
}