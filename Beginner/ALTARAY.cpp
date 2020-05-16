#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long a[n],b[n];
        for(long long i=0;i<n;i++) cin>>a[i], b[i]=1;
        for(long long i=n-2;i>=0;i--)
        {   if( (a[i]<0&&a[i+1]>0) || (a[i]>0&&a[i+1]<0) ) b[i]=b[i+1]+1;
        }
        for(long long i=0;i<n;i++) cout << b[i] << " ";
        cout << endl;
    }
}