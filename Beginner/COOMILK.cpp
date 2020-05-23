#include <iostream>
#include <string>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int x,t=0;
        cin >> x;
        string arr[x];
        for(int i=0;i<x;i++) cin >> arr[i];
        if(arr[x-1]=="cookie") cout << "NO" << endl;
        else{
        for(int i=0;i<x-1;i++){
            if(arr[i]=="cookie" && arr[i+1]!="milk"){
                cout << "NO" << endl;
                break;
            }
            else t++; 
        }
        if(t==(x-1)) cout << "YES" << endl;
        }
    }
}