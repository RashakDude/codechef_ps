#include<iostream>
using namespace std;

int main()
{
    long int num;
    cin >> num;
    while(num--){
        long long int a;
        cin >> a;
        long long int s = 0;
        while(a/5>0){
            s += a/5;
            a /= 5;
        }
        cout << s << endl;
    }
}