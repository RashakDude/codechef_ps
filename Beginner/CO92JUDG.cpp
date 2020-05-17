#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    	int t;
	cin>>t;
	while(t--)
	{
	 int n;
	 cin>>n;
	 int max1=0,max2=0,r=0,r1=0;
	 long a[n],b[n];
	 for(int i=0;i<n;i++)
	 {
	 cin>>a[i];
	 r=r+a[i];
	 if(max1<a[i])
	 max1=a[i];
	 }
	 for(int i=0;i<n;i++){
	 cin>>b[i];
	  r1=r1+b[i];
	 if(max2<b[i])
	 max2=b[i];
	}
	 r=r-max1;
	 r1=r1-max2;
	 if(r<r1)
	 cout<<"Alice"<<endl;
	 else if(r==r1)
	 cout<<"Draw"<<endl;
	 else
	 cout<<"Bob"<<endl;
	 
	 
	}
}