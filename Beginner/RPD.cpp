#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int n,test=0;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++) cin >> arr[i];
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int max=0, sum = arr[i]*arr[j];
                while(sum){
                    max += sum%10;
                    sum /= 10;
                }
                if(max > test) test = max;
            }
        }
        cout << test << endl;
    }
}