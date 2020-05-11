#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        long a;
        cin >> a;
        int sum=0;
        while(a>0){
            sum+=(a%10);
            a/=10;
        }
        cout << sum << endl;
    }
}