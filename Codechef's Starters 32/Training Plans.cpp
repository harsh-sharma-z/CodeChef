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

int main()
{  
    IOS;tie;
   int t;
   cin>>t;
   while(t--)
   {
     ll n;
     cin>>n;
     vll arr(n);
     f(i,0,n)
       cin>>arr[i];
     vll brr(n);
      f(i,0,n)
       cin>>brr[i];
     vc<vll> slot(n);
     f(i,0,n)
      slot[brr[i]].pb(arr[i]);
     vc<double> pdp(n+1,0);
     multiset<ll> ss;
     f(i,1,n+1)
     {
        for(auto&j:slot[i-1])
         ss.insert(j);
        if(ss.size())
         {
             pdp[i]=pdp[i-1];
             auto it=ss.end();;
             it--;
             pdp[i]+=*it;
             ss.erase(it);
         }
         else
          break;
     }
     f(i,1,n+1)
      pdp[i]/=i;
     double answer=*max_element(all(pdp));
     cout<<fixed<<setprecision(6)<<answer<<endl;
      
   }
    return 0;
}
