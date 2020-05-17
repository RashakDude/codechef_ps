#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        long long int a,b;
        cin >> a >> b;
        a+=b;
        int arr[] = {6,2,5,5,4,5,6,3,7,6};
        long long sum = 0;
        while(a>0){
            sum += arr[a%10];
            a/=10;
        }
        cout << sum << endl;
    }
}