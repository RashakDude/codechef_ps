#include <iostream>
#include <string>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        string s;
        cin >> s;
        int f=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '4') f++;
        }
        cout << f << endl;
    }
}