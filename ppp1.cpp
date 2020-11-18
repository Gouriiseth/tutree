#include<iostream>
#include<math.h>
using namespace std;

int main()
{
 int i,n,m,t;
 char ans;
	cout<<"enter number ";
 	cin>>t;
 	for(n=1-t;n<t;n++)
 	{ m=t-abs(n);
 	  for(i=m;i<=t;i++)
 	  cout<<" "<<i;
 	  cout<<"\n ";
	 }
	 
	 return 0;
}

