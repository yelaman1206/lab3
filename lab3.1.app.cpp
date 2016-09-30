#include<iostream>
using namespace std;

int main(){
	int x,y,z;
	cin>>x>>y>>z;
   int  Maxi=max(x,max(y,z));
   int  Mini=min(x,min(y, z));
cout<<" "<<Maxi<<"  "<<Mini;
return 0;
	
}
