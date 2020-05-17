#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int n,k;
        long long sum = 0;
        cin >> n >> k;
        while(n--){
            int val;
            cin >> val;
            if(k>val) sum += (k-val);
            else sum += min(val%k,k-(val%k));
        }
        cout << sum << endl;
    }
}