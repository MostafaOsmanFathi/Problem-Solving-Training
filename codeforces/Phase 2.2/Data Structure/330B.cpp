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
    int n,m;cin>>n>>m;
    unordered_set<int>st;
    for (int i = 0; i <m ; ++i) {
        int a,b;cin>>a>>b;
        st.insert(a);
        st.insert(b);
    }
    int i = 1;
    for (; i <= n; ++i) {
        if (!st.count(i))
            break;
    }
    cout<<n-1<<endl;
    for (int j = 1; j <=n ; ++j) {
        if (i==j)continue;
        cout<<i<<" "<<j<<endl;
    }


///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}