#include <iostream>
using namespace std;

int main(){
    int num; cin >> num;
    while(num--){
        string s1,s2;
        cin >> s1 >> s2;
        int diff=0, ques=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]=='?' || s2[i]=='?') ques++;
            else if(s1[i]!=s2[i]) diff++;
        }
        cout << diff << " " << diff+ques << endl;
    }
}