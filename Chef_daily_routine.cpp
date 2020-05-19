#include<iostream>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		string a;cin>>a;
		int count=0;
	int i=0;
while(a[i]=='C')i++;
while(a[i]=='E')i++;
while(a[i]=='S')i++;
if(i==a.size())cout<<"yes"<<endl;
else cout<<"no"<<endl;
}	
}
