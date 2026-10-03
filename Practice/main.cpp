#include <bits/stdc++.h>
using namespace std;
int fibonnaci(int n){
 if(n<=1) return n;
 int last=fibonnaci(n-1);
 int secondast=fibonnaci(n-2);
  return last + secondast;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
cout<<fibonnaci(n)<<endl;
cout<<fibonnaci(n-1);
}
