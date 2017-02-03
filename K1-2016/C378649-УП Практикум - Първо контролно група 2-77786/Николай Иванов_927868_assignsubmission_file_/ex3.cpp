#include <iostream>

using namespace std;

int main()
{
    int n;
    int arr1[n], arr2[n], arr3[n]; //doesn't work in visual studio
    cin>>n;
    if (n>=10&&n<=15)
    {
        for(int i=0; i<n; i++)
            cin>>arr1[i];

        for(int i=0; i<n; i++)
            cin>>arr2[i];
    }
    else cout<<"N must be between 10 and 15.";

    for(int i=0; i<n; i++)
    {
        arr3[i]=arr1[i]+arr2[i];
        cout<<arr3[i];
    }



    return 0;
}
