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


#include <bits/stdc++.h>
using namespace std;


int main()
{
   int t;
   cin>>t;
   while(t--)
   {

    const int H=1e9+7;
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++)
        cin>>arr[i];

    vector<vector<int>> defp(n+1, vector<int>(7));
    defp[0][0]=1;

    for(int i=0;i<n;i++)
    {
        int low=(int)to_string(arr[i]).size();
        int pos=1;

        while(low--)
        {
            pos*=10;
        }

        for(int z=0;z<7;z++)
        {

            int temp=(z*pos+arr[i])%7;

            defp[i+1][z]=(defp[i+1][z]+defp[i][z])%H;
            defp[i+1][temp]=(defp[i+1][temp]+defp[i][z])%H;


        }
    }
    
    cout<<(defp[n][0]-1+H)%H<<endl;
    
   
   }
     return 0;
}
