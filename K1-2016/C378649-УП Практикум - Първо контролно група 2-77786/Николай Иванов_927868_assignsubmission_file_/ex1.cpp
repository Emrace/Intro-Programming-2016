#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if (n>=1&&n<=100)
    {
        for (int i=n; i>=1; i--)
        {
            if (i%7==0) cout<<i<<endl;
        }
    }
    else cout<<"Invalid input!";
    return 0;
}

//1.0