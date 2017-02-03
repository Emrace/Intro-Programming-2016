#include <iostream>
using namespace std;
int main()
{int a[20],b[20],c[20],n;
    cin>>n;
for(int i=0;i<n;i++)
    cin>>a[i];
for(int i=0;i<n;i++)
    cin>>b[i];
for(int i=0;i<n;i++)
{
    c[i]=a[i]+b[i];
    cout<<c[i]<<" ";
}
cout<<endl;

return 0;}
