#include <iostream>
#include <algorithm>
#include <cmath>
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
        cout << arr[0] + arr[1] << endl;
    }
}