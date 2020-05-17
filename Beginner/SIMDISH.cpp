#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        string a[4],b[4];
        for(int i=0;i<4;i++) cin >> a[i];
        for(int i=0;i<4;i++) cin >> b[i];
        int count=0;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(a[i]==b[j]) count++;
            }
        }
        if(count >= 2) cout << "similar" << endl;
        else cout << "dissimilar" << endl;
    }
}