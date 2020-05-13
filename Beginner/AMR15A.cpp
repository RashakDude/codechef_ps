#include <iostream>
using namespace std;

int main(){
    int num, even=0, odd=0;
    cin >> num;
    while(num--){
        int x;
        cin >> x;
        if(x%2==0) even++;
        else  odd++;
    }
    if(even > odd) cout << "READY FOR BATTLE" << endl;
    else cout << "NOT READY" << endl;
}