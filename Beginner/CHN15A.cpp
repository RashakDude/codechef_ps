#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int a,b;
        cin >> a >> b;
        int arr[a];
        int sum=0;
        for(int i=0;i<a;i++) cin >> arr[i];
        for(int i=0;i<a;i++){
            arr[i]+=b;
            if(arr[i]%7 == 0) sum++;
        }
        cout << sum << endl;
    }
}