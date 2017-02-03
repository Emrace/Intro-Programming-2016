#include <iostream>
using namespace std;
int main ()
{
    int i,x;
        if(0>x && x<1000) //it should be 0 < x
            cin>>x;
        if(x>2) //strange algorithm, but it'll do
        {
            while(!(x%2))
            {
                cout<<2<<" ";
                x/=2;
            }
            for(i=3;i<=x;)
            {
                if(x%i)
                    i+=2;
                else
                {
                    cout<<i<<" ";
                    x/=i;
                }
            }
        }
        else
            cout<<x<<endl;
        return 0;
}

//0.75
