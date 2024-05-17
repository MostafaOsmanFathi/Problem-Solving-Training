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
    int n,x;cin>>n>>x;
    int arr[n];
    map<int,int>mp;
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
        ++mp[arr[i]];
        if (mp[arr[i]]==2){
            cout<<0<<endl;
            return;
        }
    }
    set<int>st;
    bool ans2{false};
    for (int i = 0; i < n; ++i) {
        int tmp=(arr[i]&x);
        if (tmp==arr[i])continue;
        if (mp.count(tmp)){
            cout<<1<<endl;
            return;
        }
        if (st.count(tmp)){
            ans2= true;
        }
        st.insert(tmp);
    }
    if (ans2){
        cout<<2<<endl;
        return;
    }
    cout<<-1<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}