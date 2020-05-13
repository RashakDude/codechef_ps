#include <iostream>
using namespace std;

int main(){
    int t,p;
    cin>>t;
    while (t--)
    {
        int n=2048,sum=0;
        cin>>p;
        while(p>0)
        {
            sum+=p/n;
            p%=n;
            n/=2;
        }
        cout<<sum<<endl;
    }
}