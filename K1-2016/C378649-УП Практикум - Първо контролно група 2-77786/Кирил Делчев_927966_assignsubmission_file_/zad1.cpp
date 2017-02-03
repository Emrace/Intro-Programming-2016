#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;

        if(n>2)
        {
            while(!(n%2))
            {
                cout<<2<<" ";
                n/=2;
            }
            for(int i=3;i<=n;)
            {
                if(n%i)
                    i+=2;
                else
                {
                    cout<<i<<" ";
                    n/=i;
                }
            }
        }
        else
            cout<<n<<endl;
        return 0;
}
