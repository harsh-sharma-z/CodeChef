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

ll n,k;
ll arr[100001];
char str[100001];
int main() {
  // your code goes here
  ll T;
  cin >> T;
  while(T--)
  {
      
      cin >> n >> k;
  
  f(i,1,n+1)
    cin >> str[i];



  f(i,0,2*n+1)
    arr[i]=0;


ll h=0;
  for(int i=1;i<=n-k+1;++i) {
    if((str[i]+h)%2!=0) {
      
      arr[i+k-1]=1;
      h++;


    }


    
    str[i]=48;

    h-=arr[i];
  }
  for(int i=n-k+2;i<=n;++i) 
  {
    str[i]=48+(str[i]+h)%2;
    h=h-arr[i];
  }
  for(int i=1;i<=n;++i)
    cout<<str[i];

cout<<endl;


}
  return 0;
  }
