#include"functii.h"

int main()
{
    int n=16;
    int *v1=new int[n];
    int *v2=new int[n];
    int *v3=new int[n];

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1,n*10);

    for (int i=0;i<n;++i) 
    {
        v1[i]=i;            // crescator
        v2[i]=n-i;          // descrescator
        v3[i]=dist(gen);    // random
    }

    int cnt1=0;
    int cnt2=0;
    int cnt3=0;

    /*cout<<endl<<"Sirurile dvs: "<<endl;
    cout<<"v1: ";
    for(int i=0;i<n;++i)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl<<"v2: ";
    for(int i=0;i<n;++i)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl<<"v3: ";
    for(int i=0;i<n;++i)
    {
        cout<<v3[i]<<" ";
    }*/

    BatcherSort(v1, 0, n, 0, cnt1);
    BatcherSort(v2, 0, n, 0, cnt2);
    BatcherSort(v3, 0, n, 0, cnt3);
    /*cout<<endl<<"Sirurile dvs SORTATE: ";
        cout<<"v1: ";
    for(int i=0;i<n;++i)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl<<"v2: ";
    for(int i=0;i<n;++i)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl<<"v3: ";
    for(int i=0;i<n;++i)
    {
        cout<<v3[i]<<" ";
    }
    cout<<endl;
    */

    cout<<"Timpi de executie: "<<endl;
    cout<<"crescator -> crescator: "<<cnt1<<endl;
    cout<<"descrescator -> crescator: "<<cnt2<<endl;
    cout<<"random -> crescator: "<<cnt3<<endl;

    delete[] v1;
    delete[] v2;
    delete[] v3;

    return 0;
}