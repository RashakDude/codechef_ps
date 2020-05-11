#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a;
    float b;
    cin >> a >> b;
    if (a%5==0 && b>a+0.5) cout << fixed << setprecision(2) << b-a-0.5 ;
    else cout << b; 
}