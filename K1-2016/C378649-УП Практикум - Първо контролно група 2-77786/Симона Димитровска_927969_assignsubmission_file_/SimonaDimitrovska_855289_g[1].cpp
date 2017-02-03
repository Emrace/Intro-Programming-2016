#include <iostream>
using namespace std;
int main () 

{  
 /* int k;
  cin>>k;
  if(k>=1 && k<=1000)
  {

  for (int i=k; i>1; i--)
  {
  	if(i%7==0)
  	cout<<i<<endl;
  }
   
   }
	
	return 0; 
} */


int k;
cin>>k;
int i[100][100];
int b=0, b1=0, maxb=0, b2=0, b3=0;
for (int j=0; j<k; j++)
for (int m=0; m<k; m++)
cin>>i[j][m];
for (int j=0; j<k; j++)
{
b=0;
for (int m=0; m<k; m++)
	{
		if ((j+1)%2==0)
		{
			b=b+i[j][m];
			b1=b1+b;
		}
		if(b>maxb) maxb=b;
	}
	if ((j+1)%2==0)
	cout<<j+1<<"e"<<b<<endl;
}
cout<<maxb<<endl;
for (int j=0; j<k; j++) 
{
	b2=0;
	for (int m=0; m<k; m++) 
	{
	
	if ((j+1))%2!=0)
	{
		b2=b2+i[j][m];
		b3=b3+b2;
	}
  }
}
if ((j+1)%2!=0)
cout<<"Neceten nomer"<<j+1<<b2<<endl;
}

if (b3>b1)
cout<<"yes"<<endl;
else cout<<"no"<<endl;

return 0;
}

