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
        ll n,m;
        cin>>n>>m;
        int aa=m,bb=m,max=0;
        int a,b;
        for(int i=n;i<m;i++)
        {


            a=i;
            b=m-(m%i);
            

            if(abs(a-b)>=max)
            {
                max=abs(a-b);
                aa=a;
                bb=b;
               
            }

            if(max>abs(i-m))
                break;
            
        }

        cout<<aa<<" "<<bb<<endl;
    }
    return 0;
}
