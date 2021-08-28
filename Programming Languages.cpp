#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for (int h=0;h<t;h++)
	{
	    int a,b,a1,b1,a2,b2,first=0,sec=0;
	    cin>>a>>b>>a1>>b1>>a2>>b2;
	    if((a==a1)||(a==b1))
	    first++;
	    if((b==a1)||(b==b1))
	    first++;
	    
	    
	    if((a==a2)||(a==b2))
	    sec++;
	    if((b==a2)||(b==b2))
	    sec++;
	    
	    if(first==2)
	    cout<<"1\n";
	    else
	    if(sec==2)
	    cout<<"2\n";
	    else
	    cout<<"0\n";
	    
	}
	return 0;
}
