#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int x;
        cin >> x;
        string a,b;
        cin >> a >> b;
        int a1=0,b1=0,a2=0,b2=0;
        for(int i=0;i<x;i++){
            if(a[i]=='0') a1++;
            if(a[i]=='1') a2++;
            if(b[i]=='0') b1++;
            if(b[i]=='1') b2++;
        }
        if(a1==b1 && a2==b2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}