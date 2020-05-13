#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        char a;
        cin >> a;
        if(a == 'b' || a == 'B') cout << "BattleShip" << endl;
        else if(a == 'c' || a == 'C') cout << "Cruiser" << endl;
        else if(a == 'd' || a == 'D') cout << "Destroyer" << endl;
        else if(a == 'f' || a == 'F') cout << "Frigate" << endl;
    }
}