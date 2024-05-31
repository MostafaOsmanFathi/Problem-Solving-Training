#include <bits/stdc++.h>
//#pragma GCC optimize("O3,unroll-loops")
//#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"YES":"NO")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
//#define int long long
using namespace std;
    int n,groups,tmp1,tmp2;
    bool cmp(const pair<int,int>&a,const pair<int,int>&b){
        if (a.first==b.first)
            return a.second >b.second;
        return a.first<b.first;
    }
    bool cm(const pair<int,int>&a,const pair<int,int>&b){
        return a.second<b.second;
    }
void solve(){
///======================================
    cin>>n>>groups;
    vector<int>vc(n);
    vector<pair<int,int>>vcSo(n);
    for (int i = 0; i < n; ++i) {
        cin>>vc.at(i);
        vcSo.at(i).first=vc.at(i);
        vcSo.at(i).second=i;
    }
    sort(vcSo.begin(),vcSo.end(),cmp);
    int con=vcSo.size()-groups;
    sort(vcSo.begin()+con,vcSo.end(),cm);
    vcSo.emplace_back(0,n);
    vector<int>ans;
    int sum{0};
    for (int i = con+1; i <vcSo.size() ; ++i) {
        sum+=vcSo.at(i-1).first;
        ans.emplace_back(vcSo.at(i).second-vcSo.at(i-1).second);
    }
    ans.front()+=vcSo.at(con).second;
    cout<<sum<<endl;
    for (int i = 0; i < ans.size(); ++i) {
        cout<<ans.at(i)<<" ";
    }


///======================================
}
signed main() {MOSTAFAOSMAN()
//        tloop
            solve();
    return 0;
}