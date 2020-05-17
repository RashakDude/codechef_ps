#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int n,k;
        cin >> n >> k;
        double arr[n];
        double sum=0; 
        for(int i=0;i<n;i++) cin >> arr[i];
        sort(arr,arr+n);
        for(int i=k;i<n-k;i++) sum += arr[i];
        cout << fixed << setprecision(6) << sum / (n-2*k) << endl;
    }
}