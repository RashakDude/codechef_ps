#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr,arr+n);
    while(m--){
        int x;
        cin >> x;
        if(x>=arr[0] && x<=arr[n-1]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}