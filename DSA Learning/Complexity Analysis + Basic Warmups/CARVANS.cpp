#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int x;
        cin >> x;
        int arr[x];
        for(int i=0;i<x;i++) cin >> arr[i];
        int sum=1;
        if(x>1){
            for(int i=1;i<x;i++){
                if(arr[i] > arr[i-11]) sum++;
                else arr[i] = arr[i-1];
            }
        }
        cout << sum;
    }
}