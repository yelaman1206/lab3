#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double x,y,z;
	cin>>x>>y>>z;
	if (x>=y>=z)
	cout<<x<<" "<<y<<" "<<z;
	else cout<<abs(x)<<" "<<abs(y)<<" "<<abs(z);
	return 0;
	}
