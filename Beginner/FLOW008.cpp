#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int a; cin >> a;
        if(a<10) cout << "What an obedient servant you are!" << endl;
        else cout << -1 << endl;
    }
}