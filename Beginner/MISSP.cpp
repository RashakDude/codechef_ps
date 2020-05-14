#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int x;
        cin >> x;
        int arr[x];
        for(int i=0;i<x;i++) cin >> arr[i];
        sort(arr,arr+x);
        for(int i=0;i<x;i+=2){
            if(arr[i]!=arr[i+1]){
                cout << arr[i] << endl;
                break;
            }
        }
    }
}