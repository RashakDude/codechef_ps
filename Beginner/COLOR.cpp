#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int x;
        cin >> x;
        string s;
        cin >> s;
        int r=0, g=0, b=0;
        for(int i=0;i<x;i++){
            if(s[i]=='R') r++;
            else if(s[i]=='G') g++;
            else b++;
        }
        cout << x - max(r,max(g,b)) << endl;
    }
}