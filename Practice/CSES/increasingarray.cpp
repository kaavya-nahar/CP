#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int prev=0;
long long count=0;
while(n--){
int curr;
cin>>curr;
if(prev>curr){
    count+=(prev-curr);
    curr=prev;
}
prev=curr;
}
cout<<count;
}