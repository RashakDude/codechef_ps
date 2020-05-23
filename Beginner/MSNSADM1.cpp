#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int x;
        cin >> x;
        int arr1[x], arr2[x];
        for(int i=0;i<x;i++) cin >> arr1[i];
        for(int i=0;i<x;i++) cin >> arr2[i];
        for(int i=0;i<x;i++){
            arr1[i] = arr1[i]*20 - arr2[i]*10;
            if(arr1[i]<=0) arr1[i]=0;
        }
        sort(arr1,arr1+x);
        cout << arr1[x-1] << endl;
    }
}