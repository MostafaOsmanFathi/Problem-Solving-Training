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
void mergeVector( vector<pair<int,int>>&tmp, vector<pair<int,int>>&tmp2){
    for (const auto& x :tmp2) {
        tmp.push_back(x);
    }
    tmp2.clear();
}
void solve(){
///==================================================
    int n,m;cin>>n>>m;
    set<pair<int,int>>st;
    for (int i = 0; i < n;++i) {
        int tmp;cin>>tmp;
        st.insert({tmp,i});
    }
    if (n==1){
        cout<<"0 0"<<endl;
        return;
    }
    vector<pair<int,int>>op,vcTmp;

    int mn=(--st.end())->first-st.begin()->first;
    while (m--){
        auto tF=--st.end();
        auto tL=st.begin();
        auto tmp=*tF;
        auto tmp2=*tL;
        --tmp.first;
        ++tmp2.first;
        st.erase(tF);
        st.erase(tL);
        st.insert(tmp);
        st.insert(tmp2);
        int tmpTmp=(--st.end())->first-st.begin()->first;
        vcTmp.push_back({tmp.second + 1, tmp2.second + 1});
        if (mn<=tmpTmp){
        }else {
            mn = tmpTmp;
            mergeVector(op,vcTmp);
        }
    }
    cout<<mn<<" "<<op.size()<<endl;
    for (const auto &x:op) {
        cout<<x.first<<" "<<x.second<<endl;
    }
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}