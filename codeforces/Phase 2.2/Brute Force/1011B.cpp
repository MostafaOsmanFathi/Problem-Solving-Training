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
bool check(int test,int n,const vector<int>&vc){
    for (auto& x:vc) {
        int tmp=x/test;
        n-=tmp;
        if (n<=0)return true;
    }
    return false;
}
void solve(){
///==================================================
    int n,m;cin>>n>>m;
    map<int,int>mp;
    while (m--){
        int tmp;cin>>tmp;
        ++mp[tmp];
    }
    vector<int>vc;
    for (auto& x:mp) {
        vc.push_back(x.second);
    }
    int l=0,r=100000;
    while (r-l>1){
        int mid=(r+l)/2;
        if (check(mid,n,vc)){
            l=mid;
        }else {
            r = mid;
        }
    }
    cout<<l<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}