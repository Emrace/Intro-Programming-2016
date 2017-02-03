#include <iostream>
using namespace std;
int main ()
{
    int a[100],b[100],c[100];
    int n,m;
    cout<<"Enter the number of elements of the first array: ";
    cin>>n;
     cout<<"Enter the number of elements of the second array: ";
    cin>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    //sechenie
  for(int i=0;i<n+m;i++)
    {
if(a[i]==b[i])
    cout<<a[i]<<" ";
    }
    //razlika
    for(int i=0;i<n+m;i++)
    {

    }
return 0;
}
