#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int a,b,c;
        cin >> a >> b >> c;
        if(a+b+c == 180) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}