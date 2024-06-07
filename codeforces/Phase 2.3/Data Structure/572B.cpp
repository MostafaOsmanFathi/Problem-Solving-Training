#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"YES":"NO")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(a,b) (((a)/gcd(a,b))*(b))
#define inf 0x3f3f3f3f3f3f3f3fLL
#define mSet(arr,value) memset((arr),(value),(sizeof (arr)))
#define int long long
using namespace std;
bool cmp(const pair<int,int>&a,const pair<int,int>&b){
//    return a.second*a.first>b.second*b.first;
    return a.first>b.first;
}
bool cmp2(const pair<int,int>&a,const pair<int,int>&b){
    ld tmp=a.first/a.second;
    ld tmp2=b.first/b.second;
    return tmp<tmp2;
}
void solve(){
///==================================================
    int n,m;cin>>n>>m;
    map<int,int>mp[2];
    for (int i = 0; i <n ; ++i) {
        char x;
        int a,b;cin>>x>>a>>b;
        mp[(x=='B')][a]+=b;
    }
    vector<pair<int,int>>vc1,vc2;
    for (const auto& x:mp[0]) {
        vc1.push_back(x);
    }
    for (const auto& x:mp[1]) {
        vc2.push_back(x);
    }
    sort(vc1.begin(), vc1.begin()+ min(m,(int)vc1.size()),cmp);
    sort(vc2.begin(), vc2.end(),cmp);
    for (int i = 0; i <m and i<vc1.size() ; ++i) {
        cout<<"S "<<vc1.at(i).first<<" "<<vc1.at(i).second<<endl;
    }
    for (int i = 0; i <m and i<vc2.size() ; ++i) {
        cout<<"B "<<vc2.at(i).first<<" "<<vc2.at(i).second<<endl;
    }

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}