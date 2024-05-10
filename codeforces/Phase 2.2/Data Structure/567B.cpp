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
    int n;cin>>n;
    set<int>st,st2;
    int mx{0};
    pair<char,int>pa[n];
    for (int i = 0; i < n; ++i) {
        cin>>pa[i].first;
        cin>>pa[i].second;
        if (pa[i].first=='-') {
            if (!st.count(pa[i].second)) {
                st2.insert(pa[i].second);
            }
        }else
            st.insert(pa[i].second);
    }
    st.clear();
    mx=st2.size();
    for (int i = 0; i < n; ++i){
        char op=pa[i].first;
        int tmp=pa[i].second;

        if (op=='-'){
            mx= max(mx,(int)(st.size()+st2.size()));
            st.erase(tmp);
            st2.erase(tmp);
        }else
            st.insert(tmp);
        mx= max(mx,(int)st.size());
    }
//    for (auto& x:st) {
//        if (st2.count(x))
//            --mx;
//    }
    cout<<mx<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}