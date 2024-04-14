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
    int n,k;cin>>n>>k;
    int prefix[n];
    for (int i = 0; i < n; ++i) {
        cin>>prefix[i];
    }
    partial_sum(prefix,prefix+n,prefix);
    int mn{INT_MAX},idex{0};
    for (int i = 0; i <=n-k ; ++i) {
        int tmp=prefix[i+k-1]-((i)?prefix[i-1]:0);
        if (tmp<mn)
            mn=tmp,idex=i;
    }
    cout<<idex+1<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}