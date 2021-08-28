#include <iostream>
using namespace std;

int main() {
    long tc,n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        if((n%4==0)||((n+1)%4==0))
        cout<<n<<endl;
        else
        cout<<(n-1)<<endl;
    }
	// your code goes here
	return 0;
}
