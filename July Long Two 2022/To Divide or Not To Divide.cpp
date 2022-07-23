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
        int a,b,n;
        cin>>a>>b>>n;

        if(a%b==0)
            {
                cout<<"-1"<<endl;
                continue;
            }

            int c=n;
            if(c%a!=0)
                c=a-(c%a)+n;

            while((c%a!=0)||(c%b==0))
            {
                c+=a;
            }

            cout<<c<<endl;
    }
    return 0;
}
