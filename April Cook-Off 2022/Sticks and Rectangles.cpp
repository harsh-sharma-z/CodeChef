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



int main() {
	// your code goes here
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		if(n==1)
		{
			cout<<3<<endl;
		}
		else
		{
		int c=0;
		for(int i=0;i<n-1;i++)
		{
			if(a[i]==-1)
					continue;
			else
			{
				for(int j=i+1;j<n;j++)
					{
						if(a[i]==a[j])
							{
								a[j]=-1;
								a[i]=-1;
								c++;
								break;
							}
				

					}
			}
		}
			
		
		int ans=n-(c*2);
		c=c+(n-(c*2));
		 ans=ans+((c%2)*2);
		cout<<ans<<endl;
	}


	}
	
	return 0;
}
