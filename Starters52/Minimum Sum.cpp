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


int gcd(vector<int>& harsh, int N)
{
    if (N== harsh.size() - 1) {
        return harsh[N];
    }

    int a = harsh[N];
    int b = gcd(harsh, N + 1);
    return __gcd(a,b); 
}

int main() {
  // your code goes here
  int T;
  cin >> T;
  while(T--)
  {
      int n,N;
      vector<int > harsh  ;
      cin>>n;
      f(i,0,n)
      {
          int temp;
          cin>>temp;
          harsh.push_back(temp);
      }
       sort(harsh.begin(),harsh.end());
       int ans=gcd(harsh, 0) ;
      
      
     cout << ans*n <<endl;
      
  }
  return 0;
}
