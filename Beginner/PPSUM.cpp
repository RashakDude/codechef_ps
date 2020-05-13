#include <iostream>
using namespace std;
int sum(int b)
{
    return b*(b+1)*0.5;
}
int psum(int a, int b)
{
    int x=sum(b);
    for(int j=1;j<a;j++)
    x=sum(x);
    return x;
}

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	   int a,b;
	   cin>>a>>b;
	   cout<<psum(a,b)<<endl;
	}
}