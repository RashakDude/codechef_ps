#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int x;
        cin >> x;
        for(int i=0;i<x;i++) cout << 500-i << " ";
        cout << endl;
    }
}