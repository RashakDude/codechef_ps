#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int x,a=1;
        cin >> x;
        while(1){
            if(a*(a+1)/2 < x) a++;
            else if(a*(a+1)/2 == x){
                cout << a << endl; break;
            }
            else{
                cout << a-1 << endl; break;
            }
        }
    }
}