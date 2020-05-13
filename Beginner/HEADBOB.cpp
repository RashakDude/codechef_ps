#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int x,y=0,i=0;
        cin >> x;
        char c;
        while(x--){
            cin >> c;
            if(c == 'Y') y++;
            else if(c == 'I') i++;
        }
        if(y>0) cout << "NOT INDIAN" << endl;
        else if(i>0) cout << "INDIAN" << endl;
        else cout << "NOT SURE" << endl;
    }
}