#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
	while(t--){
	    long long k,z,i;
	    int d0,d1;
	    cin>>k>>d0>>d1;
	    z=d0+d1;
	    long long s=0;
	    s=z;
	    if(k>=3)s=z+z%10;
	    if(k>3){
	        int a=(2*z)%10;
	        int b=(4*z)%10;
	        int c=(8*z)%10;
	        int d=(6*z)%10;
	        s+=(a+b+c+d)*((k-3)/4);
	        if((k-3)%4==1)s+=a;
	        else if((k-3)%4==2)s+=a+b;
	        else if((k-3)%4==3) s+=a+b+c;
	    }
	    if(s%3) cout<<"NO\n";
	    else cout<<"YES\n";
	}
	return 0;
}
