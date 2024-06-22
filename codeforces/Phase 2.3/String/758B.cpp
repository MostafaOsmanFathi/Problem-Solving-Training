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

void solve(){
///==================================================
    string s;cin>>s;
    char reff[4]{'-','-','-','-'};
    for (int i = 0; i <s.size() ; ++i) {
        if (s.at(i)!='!')
            reff[i%4]=s.at(i);
    }
    set<char>tmp{'R','B','Y','G'};
    for (const auto& x:reff) {
        tmp.erase(x);
    }
    for (auto& x:reff) {
        if (x=='-')
            x=*tmp.begin(),tmp.erase(tmp.begin());
    }
    int ans[4]{0};
    for (int i = 0; i < s.size(); ++i) {
        if (s.at(i)=='!'){
            ++ans[i%4];
        }
    }

    cout<<ans[find(reff,reff+4,'R')-reff]<<" ";
    cout<<ans[find(reff,reff+4,'B')-reff]<<" ";
    cout<<ans[find(reff,reff+4,'Y')-reff]<<" ";
    cout<<ans[find(reff,reff+4,'G')-reff]<<" ";
///==================================================
}
signed main() {MOSTAFAOSMAN()
//    tloop
    solve();

    return 0;
}