#include <iostream>

using namespace std;

int main()
{
    int a; // broi elementi
    int b;
    cin>>a;
    cin>>b;

    int A[a]; //doesn't work in visual studio, array size should be a constant number
    int B[b];
    int C[a+b];
    int D[a+b];
    int F[] //missing semicolon, size should be set
    for ( int i = 0; i<a; i++)
    {
        cout<< "Enter A["<<i<<"] = ";

        cin>>A[i];
    }
    for ( int i = 0; i<b; i++)
    {
        cout<< "Enter B["<<i<<"] = ";
        cin>>B[i];
    }
    for ( int i = 0; i<a+b; i++)
    {
        C [i] = A[i]; //eventually i gets bigger than a => you go outside the boundaries of the array A
        C[i+a] = B [i]; //same as above

    }
    for ( int i = 0; i<a+b; i++)
    {
        cout<<C[i];
    }
       for ( int i = 0; i<b; i++)
    {
        cout<< "Enter B["<<i<<"] = ";
        cin>>B[i];
    }
    for ( int i = 0; i<a+b; i++)
    {
         if( A[i]!B[i]) { //no such thing as "!" operator for comparison

         D [i] = A[i];
        D[i+a] = B [i];
         }



    }
    for ( int i = 0; i<a+b; i++)
    {
        cout<<D[i];
    }
      for ( int i = 0; i<a+b; i++)
    {
        cout<<A[i]- B[i];

    //missing closing bracket
    return 0;

}
