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


int digiSum(int n)
{
    int s=0;
    while(n>0)
    {
        s=(s)+(n%10);
        n=n/10;
    }
    if(s%2==0)
    return 1;
    
    return 0;
}
int main() {
	// your code goes here
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;
		int p=digiSum(n);
		n++;
		while(digiSum(n)==p)
		{
			n++;
		}
		cout<<n<<endl;
	}
	
	return 0;
}
