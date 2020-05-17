#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        string s;
        cin >> s;
        int t=0;
        for(int i=0;i<s.size();i+=2){
            if(s[i]!=s[i+1])t++;
        }
        if(t==s.size()/2) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}