#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int apple, orange, gold;
        cin >> apple >> orange >> gold;
        if(abs(apple-orange) > gold) cout << max(apple,orange) - min(apple,orange) - gold << endl;
        else cout << 0 << endl;
    }
}