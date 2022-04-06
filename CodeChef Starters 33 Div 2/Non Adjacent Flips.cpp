//Harsh Sharma's Code 
#include<bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(long long i=a;i<b;i++)
#define rf(i,a,b) for(long long i=a;i>=b;i--)
#define ll long long
#define pb push_back
#define vll vector<long long>
#define vc vector
#define fi first
#define se second
#define pqmin priority_queue<ll,vector<ll>,greater<ll>>
#define all(x) x.begin(),x.end()
#define IOS ios_base::sync_with_stdio(0)
#define tie cin.tie(NULL),cout.tie(NULL) 
int solve(string s,int n)
{
	int ans=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='1')
		{
			if(s[i+1]=='1')
			{
				ans=2;
				break;
			}

			else
				ans=1;
		}
	}
 
  

  return ans;
}


int main() {
	// your code goes here
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		string s;
		cin>>n;
		cin>>s;
	 	cout<<solve(s,n)<<endl;
	
	
}
return 0;
}
