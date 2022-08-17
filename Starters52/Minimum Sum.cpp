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
  int T;
  cin >> T;
  while(T--)
  {
      int n;
      cin>>n;
      int arr[n];
      if(n>1)
      {
      	f(i,0,n)
      	{
      		cin>>arr[i];

      	}

      	ll ans=0;

      	f(i,0,n)
      	{
      		ans= __gcd((int)ans,arr[i]);
      	}
      	cout<<n*ans<<endl;
      }
      else
      	if(n==1)
      	{
      		int a;
      		cin>>a;
      		cout<<a<<endl;
      	}
      
  }
  return 0;
}
