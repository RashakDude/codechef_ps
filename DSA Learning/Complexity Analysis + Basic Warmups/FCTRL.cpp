#include <iostream>
using namespace std;

int main(){
    long long num;
    cin >> num;
    while(num--){
        long long x;
        long long sum=0;
        while(x>=5){
            sum += x/5;
            x /= 5;
        }
        cout << sum << endl;
    }
}