#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int n,k,count=0;
        cin >> n >> k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i]%2 == 0) count++;
        }
        if(count==n && k==0) cout << "NO" <<  endl;
        else if(count>=k) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}