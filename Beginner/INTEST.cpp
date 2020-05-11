#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int num =0;
    while(a--){
        int x;
        cin >> x;
        if(x%b ==0) num++;
    }
    cout << num;
}