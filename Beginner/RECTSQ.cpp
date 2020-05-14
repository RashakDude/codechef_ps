#include <iostream>
using namespace std;

int gcd (int a, int b) {
    if(b==0) return a;
    else return gcd(b, a%b);
}

int main(){
    int num;
    cin >> num;
    while(num--){
        int a,b;
        cin >> a >> b;
        cout << (a*b)/(gcd(a,b)*gcd(a,b)) << endl;
    }
}