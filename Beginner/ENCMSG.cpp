#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    while(num--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        for(int i=0; i<s.size()-1; i+=2) swap(s[i], s[i+1]);
        for(int i=0; i<s.size(); i++) s[i]=(25-(s[i]-'a'))+'a'; 
        cout << s << endl;
    }
}