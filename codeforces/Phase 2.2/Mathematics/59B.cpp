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
//#define int long long
using namespace std;

void solve(){
///==================================================
    int n;cin>>n;
    vector<int>odd;
    int ans{0};
    for (int i = 0; i < n; ++i) {
        int tmp;cin>>tmp;
        if (tmp&1)odd.push_back(tmp);
        else ans+=tmp;
    }
    sort(odd.rbegin(), odd.rend());
    if (odd.empty()){
        cout<<0<<endl;
        return;
    }
    cout<< accumulate(odd.begin(), odd.end()-(odd.size()%2==0),ans);
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}