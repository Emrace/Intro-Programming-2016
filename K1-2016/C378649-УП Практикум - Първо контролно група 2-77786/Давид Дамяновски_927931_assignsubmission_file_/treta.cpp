#include <iostream>
using namespace std;
void sort(int m[],int bk)
{
    for(int i=0; i<bk; i++)
        for(int j=i+1; j<bk; j++)
        {
            if(m[j]<m[i])
            {
                int s=m[i];
                m[i]=m[j];
                m[j]=s;
            }
        }
}
int main()
{
    int a[100],b[100],n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int j=0; j<m; j++)
        cin>>b[j];
    int c[100],bk=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(a[i]==b[j])
            {
                c[bk]=a[i];
                bk++;
            }
    sort(c,bk);
    int d[100],bk1=0;
    for(int i=0; i<n; i++)
    {
        int f=0;
        for(int j=0; j<m; j++)
        {
            if(a[i]==b[j]) f=1;
        }
        if(f==0)
        {
            d[bk1]=a[i];
            bk1++;
        }
    }
    for(int j=0; j<m; j++)
    {
        int f=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==b[j]) f=1;
        }

        if (f==0)
        {
            d[bk1]=b[j];
            bk1++;
        }
    }
    sort(d,bk1);
    int e[100],bk2=0;
    for(int i=0; i<n; i++)
    {
        e[bk2]=a[i];
            bk2++;
    }
    for(int j=0; j<m; j++)
    {
        int f=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==b[j]) f=1;
        }
        if(f==0)
        {
            e[bk2]=b[j];
            bk2++;
        }
    }
    sort(e,bk2);
    cout<<" SECHENIE - ";
    for(int i=0; i<bk; i++)
        cout<<c[i]<<" ";
    cout<<endl;
    cout<<" OBEDINENIE - ";
    for(int i=0; i<bk2; i++)
        cout<<e[i]<<" ";
cout<<endl;
    cout<<"RAZLIKA - ";
    for(int i=0; i<bk1; i++)
        cout<<d[i]<<" ";
    cout<<endl;
    return 0;
}

//intersection does not work properly

//1.5
