#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int a,i;
        cin >> a;
        for(i=2;i<a;i++){
            if(a%i == 0){
                cout << "no" << endl;
                break;
            }
        }
        if(i==a) cout << "yes" << endl;
    }
}