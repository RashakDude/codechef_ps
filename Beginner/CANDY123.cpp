#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long num;
    cin >> num;
    while(num--){
        long long a,b;
        cin >> a >> b;
        long long c1 = floor(sqrt(a));
        long long c2 = floor((sqrt(1+4*b)-1)/2);
        if(c1>c2) cout << "Limak" << endl;
        else cout << "Bob" << endl;
    }
    return 0;
}