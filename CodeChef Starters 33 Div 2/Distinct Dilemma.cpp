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
  ll sum = 0;
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
    sum += v[i];
  }
  ll x = 1, ans = 0;
  while (sum > 0) {
    sum -= x;
    ans += 1;
    x += 1;
  }
  if (sum < 0)
    cout << ans - 1<<endl;
  else
    cout << ans<<endl;

    
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
