#include"functii.h"

void BatcherSort(int *a, int i, int d, int s, int &cnt)
 {
    if(d==2) 
    {
        compara_si_schimba(a[i], a[i+1], s, cnt);
    } 
    else if(d>2) 
    {
        BatcherSort(a, i, d/2, 0, cnt);
        BatcherSort(a, i+d/2, d/2, 1, cnt);
        sortare_secventa_bitona(a, i, d, s, cnt);
    }
}

void sortare_secventa_bitona(int *a, int i, int d, int s, int &cnt) 
{
    if(d==2) 
    {
        compara_si_schimba(a[i], a[i+1], s, cnt);
    } 
    else if (d > 2)
    {
        for(int j = 0; j <= d/2-1; ++j) 
        {
            compara_si_schimba(a[i+j], a[i+j+d/2], s, cnt);
        }
        sortare_secventa_bitona(a, i, d/2, s, cnt);
        sortare_secventa_bitona(a, i+d/2, d/2, s, cnt);
    }
}

void compara_si_schimba(int &a, int &a1, int s, int &cnt) 
{
    cnt++;
    if(s==1) 
    {
        if(a<a1) swap(a, a1);
    } 
    else 
    { 
        if(a>a1) swap(a, a1);
    }
}