#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
pair<int,int> p; //declaration of pair
p={3,5}; //initialise
pair<int,int> &p1=p; //by reference changes both
p1.first=2;
p1.second=8;
cin>>p1.first; //takes input
cout<<p.first<<" "<<p.second<<endl;
pair<int,int> p_array [3];
p_array[0]={2,5};
p_array[1]={7,3};
p_array[2]={9,10};
swap(p_array[0],p_array[1]);
for(int i=0;i<3;i++){
    cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
}
}