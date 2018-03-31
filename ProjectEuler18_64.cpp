#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<x<<endl;



 int mx(int a,int b){return a>b?a:b;}

int main(){
  freopen("input.txt","r",stdin);
vector<int> v;
int m=100,curr;
for(int i=0;i<m*(m+1)/2;i++){
  cin>>curr;
  v.push_back(curr);
}

for(int level=m-1;level>0;level--){
  for(int k=level*(level-1)/2;k<(level)*(level+2)/2;k++){
    v[k]+=mx(v[k+level],v[k+level+1]);
  }
}


cout<<v[0];


return 0;
   }