#include <bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int zeroes=0;
while(n>=5){
    zeroes+=n/5;
    n/=5;
}
cout<<zeroes;
}
