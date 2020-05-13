#include <iostream>
using namespace std;

long gcd (long a ,long b){
    if(b==0) return a;
    else return gcd(b,a%b); 
}

int main(){
    int num;
    cin >> num;
    while(num--){
        long x,y;
        cin >> x >> y;
        cout << gcd(x,y) << " " << x*y/gcd(x,y) << endl;
    }
}