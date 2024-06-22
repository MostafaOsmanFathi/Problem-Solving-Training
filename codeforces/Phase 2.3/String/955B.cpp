#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"Yes":"No")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(a,b) (((a)/gcd(a,b))*(b))
#define inf 0x3f3f3f3f3f3f3f3fLL
#define mSet(arr,value) memset((arr),(value),(sizeof (arr)))
#define int long long
using namespace std;

void solve(){
///==================================================
    string s;cin>>s;
    map<char,int>mp;
    for (const auto& x:s) {
        ++mp[x];
    }
    if (mp.size()<2 or s.size()<4 or mp.size()>4){
        outCondtion(false)
        return;
    }else if (mp.size()>3 and s.size()>3){
        outCondtion(true)
        return;
    }
    int tmp{0};
    for (auto x:mp) {
        if (x.second>1)
            ++tmp;
    }
    outCondtion(tmp>1 or (mp.size()==3));
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}