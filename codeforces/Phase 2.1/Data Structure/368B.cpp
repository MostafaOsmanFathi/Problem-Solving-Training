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
    int n,q;cin>>n>>q;
    int arrSuffix[n],arr[n];
    set<int>st;
    for (int i = 0; i < n; ++i) {
     cin>>arr[i];
    }
    for (int i = 0; i <n ; ++i) {
        st.insert(arr[n-i-1]);
        arrSuffix[n-i-1]=st.size();
    }
    while (q--){
        int qq;cin>>qq;
        cout<<arrSuffix[qq-1]<<endl;
    }
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}