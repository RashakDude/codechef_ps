#include <iostream>
using namespace std;

int main(){
    long long num; cin >> num;
    while(num--){
        long long x; cin >> x;
        while(x--){
            int i,q;
            long long n;
            cin >> i >> n >> q;
            if(i==q) cout << n/2 << endl;
            else{
                if (n%2 == 0) cout << n/2 << endl;
                else cout << (n/2)+1 << endl; 
            }
        }
    }
}