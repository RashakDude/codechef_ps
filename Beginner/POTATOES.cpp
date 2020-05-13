#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int x,y,s;
        cin >> x >> y;
        int t = x+y;
        for(int i=t+1;i<t*2;i++){
            for(s=2;s<i;s++){
                if(i%s == 0) break;
            }
            if(i==s){
                cout << i-t << endl;
                break;
            }
        }
    }
}