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



int main()
{
    ll T;
    cin >> T;
    while(T--)
    {
        ll x,y,n,r;
        cin>>x;
        cin>>y;
        cin>>n;
        cin>>r;
        if((r/y)>=n)
        {
            cout<<"0 "<<n<<endl;
        }
        else
            if((r/x)<n)
            {
                cout<<"-1"<<endl;
            }
        else
        {
            int a=y*n;
            int b=x-y;
            int c=(r-a)/b;
            if((r-a)%b !=0)
                c++;
            cout<<c<<" "<<(n-c)<<endl;
        }
    }
    return 0;
}
