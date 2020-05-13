#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        long long a,b;
        cin >> a >> b;
        if(a>b) cout << ">" << endl;
        else if(a<b) cout << "<" << endl;
        else cout << "=" << endl;
    }
}