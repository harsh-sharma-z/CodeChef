cust = int(input())
budget = [0]*cust
for i in range(cust):
    budget[i] = int(input())
total_bugt = 0
total_bugt_list = [0]*cust
for i in range(cust):
    total_bugt =  0
    for j in range(cust):
        if(budget[i] <= budget[j]):
            total_bugt += budget[i]
    total_bugt_list[i] = total_bugt
max_budget = total_bugt_list[0]
for i in range(len(total_bugt_list)):
    if(max_budget < total_bugt_list[i]):
        max_budget = total_bugt_list[i]

print(max_budget)


____________________OR_______________________________

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

long long maxp(long long arr[], long long n){
sort(arr, arr+n);
long long ans = arr[0];
for(long long i=0; i<n; i++){
    ans=max(ans,arr[i]*(n-i));
}
cout<<ans;
}

int main() {
long long n;
cin>>n;
long long arr[n];
for(long long i=0; i<n; i++){
    cin>>arr[i];
}
maxp(arr, n);
return 0;
}
