#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ul unsigned long long

int main() {
    int T;
    cin>>T;
    while(T--){
        int n,k;
        cin>>n>>k;
        //priority queue for min element
        priority_queue<int,vector<int>,greater<int>> queue;
        while(n>0){
            queue.push(n%10);
            n/=10;
        }
        while(k--){
            ll temp=queue.top();
            if(temp==9){
                break;
            }
            queue.pop();
            queue.push(temp+1);
        }
        ll sol=1;
        while(!queue.empty()){
            sol*=queue.top();
            queue.pop();
            
        }
        cout<<sol<<endl;
    }
    return 0;
}
