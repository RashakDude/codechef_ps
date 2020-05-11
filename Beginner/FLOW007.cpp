#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        string a;
        cin >> a;
        reverse(a.begin(), a.end());
        cout << stoi(a) << endl;
    }
}