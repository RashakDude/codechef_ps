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
        int arr2[x-1];
        for(int i=0;i<x;i++) cin >> arr[i];
        sort(arr,arr+x);
        for(int i=0;i<x-1;i++) arr2[i] = arr[i+1] - arr[i];
        sort(arr2,arr2 + (x-1));
        cout << arr2[0] << endl;
    }
}