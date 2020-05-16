#include <iostream>
using namespace std;
int main()
{
    long long int num;
    cin >> num;
    while(num--){
        long long int n, count=0;
        cin >> n;
        long long int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++){
            long long int s=0,p=1;
            for(int j=i;j<n;j++){
                s+=a[j];
                p=p*a[j];
                if(s==p) count++;
            }
        }
        cout << count << endl;
    }
}