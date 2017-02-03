#include <iostream>

using namespace std;

int main()
{
 /*  int n;
   cout<<"n=";
   cin>>n;

if (n>=1 && n<=1000)
{


   for (int i=n; i>1; i--)
   {
      if (i%7==0) cout<<i<<endl;
   }
}
else cout<<"Erorr";

    */

    int n;
    cout<<"n=";
    cin>>n;
    int a[100][100];
    int s=0, s1=0, s2=0, s3=0, maxS=0;

   for (int i=0; i<n; i++)
   {
       for (int j=0; j<n; j++)
        cin>>a[i][j];
   }

    for (int i=0; i<n; i++)
    {
        s=0;
        for (int j=0; j<n; j++)
        {
            if ((i+1)%2==0) //it should be just i
                {
                    s = s+a[j][i];
                    s1= s1+s;

                }
                if (s>maxS) maxS=s;
        }
        if ((i+1)%2==0) cout<<"Sum na cheten red Nomer"<<i+1<<"e"<<s<<endl;
    }
    cout<<"MaxS="<<maxS<<endl;

     for (int i=0; i<n; i++)
{

        s2=0;
       for (int j=0; j<n; j++)
   {
        if ((i+1)%2!=0)
     {
         s2 = s2+a[i][j];
         s3 = s3+s2;
     }
 }
 if ((i+1)%2!=0) cout<<"Sum na necheten red Nomer"<<i+1<<"e"<<s2<<endl;
}

if (s3>s1) cout<<"Yes"<<endl;
else cout<<"No"<<endl;


    return 0;
}
