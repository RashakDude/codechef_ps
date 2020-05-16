#include <iostream>
using namespace std;

int main(){
    long long num;
    cin >> num;
    while(num--){
        long long a,b,c,temp=0;
        cin >> a >> b >> c;
        if(a > b*2) temp = a - (b*2);
        if(c >= (temp*4 + b*4) && c <= (a+b)*4 && c%4 == 0) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}