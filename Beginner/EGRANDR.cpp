#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int n;
        cin >> n;
        long long sum=0;
        int flag1=0, flag2=1;
        for(int i=0;i<n;i++){
            int t;
            cin >> t;
            if(t==5) flag1 = 1;
            if(t==2) flag2 = 0;
            sum += t; 
        }
        double f = sum/n;
        if(flag1 && flag2 && f>=4) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}