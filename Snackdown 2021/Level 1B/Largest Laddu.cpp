#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int size=pow(2,n);
	    int x;
	    vector<int> A;
	    for(int i=0;i<size;i++)
	    {
	        cin>>x;
	        A.push_back(x);
	    }
	    int y=*min_element(A.begin(),A.end());
	    int z=*max_element(A.begin(),A.end());
	    
	    if(z-y<=1){
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
