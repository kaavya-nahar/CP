#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
int curr=1;
int best=1;
for(int i=1;i<s.length();i++){
    if(s[i-1]==s[i]){
        curr++;
    }else{
        curr=1;
    }
    best=max(best,curr);
}
cout<<best;
}