
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

int main() {
  int t;
  cin >> t;
  while(t--)
  {
    int n;
    cin>>n;
    int s=0;
    while (n != 1)
    {
        if (n%2 != 0)
        {
            n--;
            s++;
        }
        n = n/2;
    }

    cout<<s<<endl;

  }
}
