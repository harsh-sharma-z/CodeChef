#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    if(m>n)
	    cout<<n<<endl;
	    else
	    {
	        cout<<(n+(n-m))<<endl;
	    }
	}
	return 0;
}
