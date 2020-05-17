#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while (num--){
        int x;
        cin >> x;
        long long arr1[x], arr2[x], sum=0;
        arr2[0] = 1;
        for(int i=0;i<x;i++) cin >> arr1[i];
        for(int i=1;i<x;i++){
            if(arr1[i]>=arr1[i-1]) arr2[i]=arr2[i-1]+1;
            else arr2[i]=1; 
        }
        for(int i=0;i<x;i++) sum+=arr2[i];
        cout << sum << endl;
    }
}