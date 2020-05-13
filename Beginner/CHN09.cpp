#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        string s;
        cin >> s;
        int a=0, b=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a') a++;
            else b++;
        }
        cout << min(a,b) << endl;
    }
}