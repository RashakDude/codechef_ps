#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        string s;
        cin >> s;
        int c=0;
        for(int i=0; i<7; i++){
            if(s[i] != s[i+1])
            c++;
        }
        if(s[0]!=s[7]) c++;
        if(c<=2) cout << "uniform" << endl;
        else cout << "non-uniform" << endl;
    }
}