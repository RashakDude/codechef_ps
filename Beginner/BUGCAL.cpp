#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num;;
    cin >> num;
    while(num--){
        long long a,b,c=0;
        cin >> a >> b;
        int arr[10];
        for(int i=0;i<10;i++){
            arr[i] = (a+b)%10;
            a/=10;
            b/=10;
        }
        for(int i=0;i<10;i++) c += arr[i]*pow(10,i);
        cout << c << endl;
    }
}