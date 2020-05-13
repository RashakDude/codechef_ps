#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        string s1, s2;
        cin >> s1 >> s2;
        int t=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!='?' && s2[i]!='?' && s1[i]!=s2[i]) t++;
        }
        if(t>0) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
}