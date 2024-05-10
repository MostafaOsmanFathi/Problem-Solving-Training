#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"YES":"NO")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(x,y) ((x/__gcd(x,y))*y)
#define int long long
using namespace std;

void solve(){
///==================================================
    string s;cin>>s;
    vector<int>vc;
    for (int i = 0; i < s.size(); ++i) {
        if (string tmp=s.substr(i,5);tmp=="heavy"){
            vc.push_back(1);
        }else if (tmp=="metal"){
            vc.push_back(2);
        }
    }
    int cnt{0},ans{0};
    for (int i = vc.size()-1; i >=0 ; --i) {
        if (vc.at(i)==2)++cnt;
        else
            ans+=cnt;
    }
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}