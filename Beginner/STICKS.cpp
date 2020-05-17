#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++) cin >> arr[i];
        sort(arr,arr+n,greater<int>());
        int length=0,breadth=0,i;
        for(i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                length=arr[i];
                break;
            }
        }
        for(i=i+2;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                breadth=arr[i];
                break;
            }
        }
        if (length!=0 && breadth!=0) cout << length * breadth << endl;
        else cout << -1 << endl;
    }
}