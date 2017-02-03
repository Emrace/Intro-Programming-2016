#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    /*
    zad 1;

    int n;
    cout<<"n=";
    cin>>n;
    if(n>=1 and n<=1000)
    {
        for(int i=n;i>=1;i--)
        {
            if(i%7==0) cout<<i<<endl;
        }
    }
    else cout<<"Invalid input";

zad2:
int n;
cout<<"n=;
cin>>n;
int a[100][100]
int S=0;
int S1=0;
int maxS=0;
int S2=0;
int S3=0;
for(int i=0;i<n;i++)
{
 for(int j=0;j<n;j++)
        cin>>a[i][j];
}
for(int i=0;i<n;i++)
{
    S=0;
    for(int j=0;j<n;j++)
    {
        if((i+1)%2==0)
        {
            S=S+a[j][i];
            S1=S1+S;
        }
        if(S>maxS) maxS=S;
    }
    if((i+1)%2==0)
    {
        cout<<"Suma ot elementite na chetna kolona Nomer"<<i+1<<"e"<<S<<endl;
    }
    cout<<"MaxS="<<maxS<<endl;
}
for(int i=0;i<n;i++)
{
    S2=0;
    for(int j=0;j<n;j++)
    {
        if((i+1)%2!=0)
        {
            S2=S2+a[i][j];
            S3=S3+S2;
        }
    }
    if((i+1)%2!=0)
    {
        cout<<"Suma ot elementite na nechetna kolona Nomer"<<i+1<<"e"<<S2<<endl;
    }

}

int n;
cout<<"n=;
cin>>n;
int a[100][100]
int S=0;
int S1=0;
int maxS=0;
int S2=0;
int S3=0;
for(int i=0;i<n;i++)
{
 for(int j=0;j<n;j++)
        cin>>a[i][j];
}
for(int i=0;i<n;i++)
{
    S=0;
    for(int j=0;j<n;j++)
    {
        if((i+1)%2==0)
        {
            S=S+a[j][i];
            S1=S1+S;
        }
        if(S>maxS) maxS=S;
    }
    if((i+1)%2==0)
    {
        cout<<"Suma ot elementite na chetna kolona Nomer"<<i+1<<"e"<<S<<endl;
    }
    cout<<"MaxS="<<maxS<<endl;
}
for(int i=0;i<n;i++)
{
    S2=0;
    for(int j=0;j<n;j++)
    {
        if((i+1)%2!=0)
        {
            S2=S2+a[i][j];
            S3=S3+S2;
        }
    }
    if((i+1)%2!=0)
    {
        cout<<"Suma ot elementite na nechetna kolona Nomer"<<i+1<<"e"<<S2<<endl;
    }

}
if(S3>S1) cout<<"DA"<<endl;
else cout<<"Ne"<<endl;
}
zad3:
int a[20]
int b[20];
int c[20];
int n;
cout<<"n=";
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
{
   cin>>b[i];
}
for(int i=0;i<n;i++)
{
    c[i]=a[i]+b[i];
    cout<<c[i]<<" "'
}
cout<<endl;
 return 0;
