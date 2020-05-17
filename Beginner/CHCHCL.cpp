#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int n,m;
        cin >> n >> m;
        if((n*m)%2==0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}