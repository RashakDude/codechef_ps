#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int a,b,sum=0;
        cin >> a >> b;
        while(a--){
            int c,d;
            cin >> c >> d;
            if(c<b) b-=c;
            else{
                sum += (c-b)*d;
                b=0;
            }
        }
        cout << sum << endl;
    }
}