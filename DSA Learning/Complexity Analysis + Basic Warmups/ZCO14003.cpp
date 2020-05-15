#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int num;
    cin >> num;
    int arr[num];
    for(int i=0;i<num;i++) cin >> arr[i];
    sort(arr,arr+num);
    for(int i=0;i<num;i++) arr[i] *= (num-i);
    sort(arr,arr+num);
    cout << arr[num-1];
}