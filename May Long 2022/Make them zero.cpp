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

//This is a test file to create a cpp program
//It can hold minor peices of code to run for the instance.


// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
    int n, a[32]={};
    cin>>n;
    

    for(int i=0;i<n;i++){
        int num ,h=0;
        cin>>num;
        while(num)
        {
            if(a[h]==0) a[h]=num%2;
            num/=2;
            h++;
        }
    }

    int c=0;
    for(int i=0;i<32;i++)
    {
        c+=a[i];
    }

    cout<<c<<endl;
   
   }
     return 0;
}
