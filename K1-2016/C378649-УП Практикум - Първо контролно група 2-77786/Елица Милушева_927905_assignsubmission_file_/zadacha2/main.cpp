#include <iostream>

using namespace std;

int main()
{
    int Min = 0;
    int sum =0; //suma
    int n;
    cin>>n;

    int A[n][n];

    if ( n >=1 && n<=100)
    {
        for (int i = 0; i<n; i++)
        {

            for (int j = 0; j<n; j++)
            {

                cin>>A[i][j];
            }
            cout <<endl;
        }

        for (int i = 0; i<n; i++)
        {
            for (int j = 0; j<n; j++)
            {
                cout<<A[i][j]<< " ";
            }

            cout <<endl;



        }
        for (int i = 0; i<n; i++)
        {
            for (int j = 0; j<n; j++)
            {
                if(j%2 == 1)
                {

                    sum = sum + A[i][j];
                }




            }

        }
        //you just sum up all the odd sums
        if (Min>sum)
            Min=sum;
        cout<< " Nai-malkta suma e "<< sum;
    }
    else
    {
        cout << " Wuvedete drugo chislo";
    }

    return 0;
}

//0.5/1.0













