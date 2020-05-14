#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        string s;
        cin >> s;
        int one=0 , zero=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') one++;
            else zero++;
        }
        if(zero==1 || one==1) cout << "Yes" << endl;
        else cout << "No" << endl; 
    }
}