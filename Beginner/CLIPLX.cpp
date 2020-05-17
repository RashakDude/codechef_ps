#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int x,y;
        cin >> x >> y;
        x -= y;
        if(x>0) cout << x << endl;
        else cout << 0 << endl;
    }
}