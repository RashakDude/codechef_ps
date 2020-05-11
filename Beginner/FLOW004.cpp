#include <iostream>
#include <string>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        string a;
        cin >> a;
        cout << int(a[0]) + int(a[a.size()-1]) - 96 << endl;
    }
}