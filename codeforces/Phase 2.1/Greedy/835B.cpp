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
    int k;cin>>k;
    string n;cin>>n;

    int sum= accumulate(n.begin(), n.end(),0)-(n.size()*'0');
    if (sum>=k){
        cout<<0<<endl;
        return;
    }
    sort(n.begin(), n.end());
    int req{k-sum};
    int i = 0;
    for ( ;i <n.size() and req>0 ; ++i) {
        req-=9-(n.at(i)-'0');
    }
    cout<<i<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}