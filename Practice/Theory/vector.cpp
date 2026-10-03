#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int> &v){
    cout<<"size: "<<v.size()<<'\n';
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<'\n';
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
vector<int> v={1,2,3,4,5};
vector<int> &v2=v;
v2[0]=6;
v2.push_back(5);
printVector(v);
printVector(v2);
}
//vector of pairs
#include <bits/stdc++.h>
using namespace std;
void printVector(vector<pair<int,int> >&v){
    cout<<"size: "<<v.size()<<'\n';
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<'\n';
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<pair<int,int>>v(n);
for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    v[i].first=x;
    v[i].second=y;
}
printVector(v);
}
//vector of vectors
