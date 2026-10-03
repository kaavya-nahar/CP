#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int j=n-1;
long long sum=0;
while(j--){
    int x;
    cin>>x;
  sum+=x;
}
cout<< n*1LL*(n+1)/2 - sum;
}