#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){
  int n;cin>>n;
  map<int,int>mp;
  while(n--){
    int tmp;cin>>tmp;
    ++mp[tmp];
    }
    vector<int>vc;
    for(auto& x:mp){
        vc.push_back(x.second/2);
       //cout <<  x.second/2<<" ";
    }
    //return 0;
  //  cout<<endl;
    int j=vc.size()-1,ans{0};
    for(int i=0;i<vc.size() and i<=j ;i){
        //cout<<i<<j<<endl;
        if(not vc[i])++i;
        else if(not vc[j])--j;
        else if(i==j){
            ans+=vc[i]/2;
            break;
        }else if(vc[i]==vc[j])++i,--j,ans+=vc[i-1];
        else if(vc[i]>vc[j]){
            ans+=vc[j];
            vc[i]-=vc[j];
            --j;
        }else{
            ++i;
            ans+=vc[i-1];
            vc[j]-=vc[i-1];
        }
        }
    cout<<ans;
    return 0;
}