#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll t;cin>>t;
	ll type, value;
	set<int> s;
	
	for(auto i=0;i<t;i++)
	{	
		cin>>type;
		cin>>value;

		switch(type){
			case 1:{
				s.insert(value);
				break;
			}
			case 2:{
				auto it = s.find(value);
				if(it != s.end())
					s.erase(it);
				break;
			}
			case 3:{
				auto it = s.find(value);
				if(it != s.end())
					cout<<"Yes\n";
				else
					cout<<"No\n";	 
				break;
			}
		}			
	}
}