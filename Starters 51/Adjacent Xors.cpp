//Harsh Sharma's Code 
#include <iostream>
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

//This is a test file to create a cpp program
//It can hold minor peices of code to run for the instance.


int n,x,arr[200001],res[200001][2];
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        cin >> n >> x;

        for(int i=1;i<=n;++i)
            cin >> arr[i];

        for(int i=2;i<=n;++i) {

            res[i][0]=max(res[i-1][0]+(arr[i-1]^arr[i]),res[i-1][1]+((arr[i-1]+x)^arr[i]));
            res[i][1]=max(res[i-1][0]+(arr[i-1]^(arr[i]+x)),res[i-1][1]+((arr[i-1]+x)^(arr[i]+x)));

  }

  if(res[n][0]>res[n][1])
    cout<<res[n][0]<<endl;
else
    cout<<res[n][1]<<endl;

  
    }
    return 0;
}
