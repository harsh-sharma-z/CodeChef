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
void solve(){

 ll n;
  cin >> n;
  vector<ll>v(n);
  ll ans = 0;
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
    if (v[i] % 2 == 0)
      ans += 1;
  }
  if ((n - ans) % 2 == 0)
    cout << min(ans, (n - ans) / 2)<<endl;
  else
    cout <<ans<<endl;
    
    }



int main() {
	// your code goes here
	int t;
	cin>>t;

	while(t--)
	{
		
	 solve();
	
	
}
return 0;
}
