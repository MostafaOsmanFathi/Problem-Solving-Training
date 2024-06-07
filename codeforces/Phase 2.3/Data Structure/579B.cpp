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
 int n;cin>>n;
    vector<tuple<int,int,int>> vc;

    for(int i=2;i<=n*2;i++){
        for (int j = 1; j < i; ++j)
        {
            int tmp;cin>>tmp;
            vc.push_back(make_tuple(tmp,i,j));
        }
    }
    sort(vc.begin(), vc.end(),greater<tuple<int,int,int>>());
    set<int>st;
    int arr[(n*2)+1];
    for (const auto& [a,b,c]:vc) {
        if (st.count(b)or st.count(c))continue;
        st.insert(b);
        st.insert(c);
        arr[b]=c,arr[c]=b;
    }
    for (int i = 1; i <=n*2 ; ++i) {
        cout<<arr[i]<<" ";
    }

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}