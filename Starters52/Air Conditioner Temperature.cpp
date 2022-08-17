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
  	int a,b,c;
  	cin>>a>>b>>c;

  	if(max(a,c)<=b)
  		cout<<"Yes"<<endl;
  	else
  		cout<<"No"<<endl;
  }
}
