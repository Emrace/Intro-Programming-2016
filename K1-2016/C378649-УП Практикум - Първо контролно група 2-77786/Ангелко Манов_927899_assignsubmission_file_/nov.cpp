#include <iostream>
using namespace std;
int main(){
int a,i;
cin>>a;
if(0<a&&a<1000)
for (i=a;i>=7;i--){
    if (i%7==0)
        cout<<i<<endl;
}
return 0;
}

//1.0