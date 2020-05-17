#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        long long n,p,a=0,b=0,test;
        cin >> n >> p;
        long long hard = p/10 , cakewalk = p/2;
        for(int i=0;i<n;i++){
            cin >> test;
            if(test>=cakewalk) a++;
            else if(test<=hard) b++;
        }
        if(a==1 && b==2) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}