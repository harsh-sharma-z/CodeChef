#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
    	int n;
    cin>>n;
    string s;
    cin>>s;
    vector<vector<int>>ans;

    for(int i = n-1;i>=0;i--){
      if(s[i]=='0'){
        int harsh = i+1;
        for(int j = 0;j<=i;j++) {
          if(s[j]=='1') s[j]='0';
          else s[j] = '1';
        }
        ans.push_back({1ll,harsh});
      }
    }
    int ansint = ans.size();
    cout<<ansint<<endl;
    for(auto harsh:ans) cout<<harsh[0]<<" "<<harsh[1]<<endl;
    
    }
 return 0;
}
