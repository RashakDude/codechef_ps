#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int n,k;
        cin >> n >> k;
        int arr[n];
        for(int i=0;i<n;i++) cin >> arr[i];
        sort(arr,arr+n);
        cout << arr[(n+k)/2] << endl;
    }
}