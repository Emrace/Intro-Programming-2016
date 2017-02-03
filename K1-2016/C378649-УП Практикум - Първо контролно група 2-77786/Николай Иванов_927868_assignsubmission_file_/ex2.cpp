#include <iostream>

using namespace std;

int main()
{
    int n, sum=0, sumn=0, A[10][10];
    cin >> n;
    int matrix[n-1][n-1];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout << "A[" << i+1 << "][" << j+1 << "]=";
            cin >> matrix[i][j];
        }
    }
    for (int i=0; i<n; i++ )
    {
    for (int j=0; j<n; j++ )
    {
        if(matrix[i][j]%2==0) sum=sum+matrix[i][j];
        if(matrix[i][j]%2==0) sumn=sumn+matrix[i][j];
    }

    }

    //you just sum up all the even sums
    if (sum>sumn) cout<<sum;
    else cout<<sumn;

    return 0;
}

//0.5
