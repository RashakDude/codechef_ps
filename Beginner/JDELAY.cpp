#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int x,c=0;
        cin >> x;
        while(x--){
            int a,b;
            cin >> a >> b;
            if(b-a>=5)c++;
        }
        cout << c << endl;
    }
}