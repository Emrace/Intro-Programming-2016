#include <iostream>
using namespace std;
int main()
{
	int k;
	cin>>k;
	int i[100][100];
	int b=0,b1=0,max=0,b2=0,b3=01;
	for (int j=0;j<k;j++)
	{
		for( int m=0;m<k;m++)
		{
	if ((j+1)%2==0) //indices start from zero
	{
		b=b+i[j][m];
		b1=b1+b; 
	}
	if (b>max)max=i;}
	if ((j+1)%2==0){
	cout<<j+1<<"e"<<b<<endl;
	}
	cout<<max<<endl;
	for (int j=0;j<k;j++)
	{
		if ((j+1)%2==0)	
		{
			b1=b2+i[j][m];
			b3=b3+b2;
		}}
		if ((i+1)%2!=0)
		cout<<i+1<<"e"<<b2<<endl;
	}
	if(b3>b1) cout<<"DA";
	else cout<<"NE";
	return 0; 
}}
