#include <iostream>
using namespace std;
int main ()
{
int n;
cin>>n;
while(n<0 || n>100)
{
    cout<<"Invalid entry try again ";
    cin>>n;
}
int a[100][100];
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
        cin>>a[i][j];
}
int sum=0,min=0,p=0;
int sum1=0,sum2=0;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(j%2!=0)
        {
          sum+=a[i][j];
          sum2+=a[i][j];
        }

       if(i%2==0)sum1+=a[i][j];
    }
    if(p>sum)min=sum;
        else min=p;
    p=sum;
    sum=0;

}
cout<<min<<endl;
if(sum2>sum1)cout<<"The sum of the columns is higher than the sum of the rows "<<sum2;
else cout<<"The sum of the rows is higher than the sum of the columns "<<sum1;
return 0;
}
