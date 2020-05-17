#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int x,t=0;
        cin >> x;
        while(x>0){
            x -= pow(int(sqrt(x)),2);
            t++;
        }
        cout << t << endl;
    }
}