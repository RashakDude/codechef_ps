#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        long long a;
        cin >> a;
        long sum = 0;
        sum += a/100;
        a %= 100;
        sum += a/50;
        a %= 50;
        sum += a/10;
        a %= 10;
        sum += a/5;
        a %= 5;
        sum += a/2;
        a %= 2;
        sum += a;
        cout << sum << endl;
    }
}