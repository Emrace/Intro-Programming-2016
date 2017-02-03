#include <iostream>
using namespace std;

int main()


{

int n,a[100][100];

cin>>n;

int S=0,S1=0,maxS=0,S2=0,S3=0;

for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cin>>a[i][j];



    for(int i=0;i<n;i++)
    {

        S=0;
    for(int j=0;j<n;j++)
    {
        if((i+1)%2==0) {S=S+a[j][i];S1=S1+S;}
            if (S>maxS) maxS=S;
    }
   if((i+1)%2==0) cout<<"suma od redovi na cetni koloni e "<<i+1<<" e " <<S<<endl; //you should start counting from zero, so the first index is even

    }

    cout<<" maksimalno s "<<maxS<<endl;


    for(int i=0;i<n;i++)
    {

        S2=0;
    for(int j=0;j<n;j++)
    {
        if((i+1)%2!=0) {S2=S2+a[i][j];S3=S3+S2;}

    }
   if((i+1)%2!=0) cout<<"suma ot elenemti na ne cetni "<<i+1<<" e " <<S2<<endl;

    }


    if(S3>S1) cout<<"da "<<endl;
    else cout<<"ne "<<endl;




return 0;}

//1.75
