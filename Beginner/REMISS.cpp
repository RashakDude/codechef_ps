#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        long long a,b;
        cin >> a >> b;
        cout << max(a,b) << " " << a+b << endl;
    }
}