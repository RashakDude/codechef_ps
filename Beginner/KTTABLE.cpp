#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int x;
        cin >> x;
        int arr1[x], arr2[x], arr3[x];
        for(int i=0;i<x;i++) cin >> arr1[i];
        for(int i=0;i<x;i++) cin >> arr2[i];
        arr3[0] = arr1[0];
        for(int i=1;i<x;i++) arr3[i] = arr1[i] - arr1[i-1] ;
        int sum = 0;
        for(int i=0;i<x;i++){
            if(arr2[i] <= arr3[i]) sum++;
        }
        cout << sum << endl; 
    }
}