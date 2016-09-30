#include<iostream>
using namespace std;

int main(){
	double a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a >= b >= c >= d)
	cout<<a<<" "<<b<<" "<<c<<""<<d;
		else if(a>b>c>d)
		cout<<"  ";
		else cout<<a*a<<" "<<b*b<<" "<<c*c<<" "<<d*d;
		 return 0;
}
