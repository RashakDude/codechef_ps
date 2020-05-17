#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int n,m;
        cin >> n >> m;
        cout << n*(m-1) + m*(n-1) << endl;
    }
}