#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int x,d=0;
        cin >> x;
        string s[] = {"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
        for(int i=1900;i<x;i++){
            if((i%4==0 && i%100!=0) || i%400==0) d++;
            d++;
        }
        cout << s[d%7] << endl; 
    }
}