#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int c=0,h=0,e=0,f=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='C') c++;
        if(s[i]=='H' && c>h) h++;
        if(s[i]=='E' && h>e) e++;
        if(s[i]=='F' && e>f) f++;
    }
    cout << f << endl;
}