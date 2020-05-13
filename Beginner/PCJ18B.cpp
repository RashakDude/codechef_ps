#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int x;
        cin >> x;
        long sum = 0;
        while(x>0){
            sum += x*x;
            x -= 2;
        }
        cout << sum << endl;
    }
}