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
string dfs(const string& v,unordered_map<string,string>&mp){

    if (mp.count(v))
        return dfs(mp[v],mp);
    else
        return v;
}
void solve(){
///==================================================
    int n;cin>>n;
    vector<string>vc;
    unordered_map<string,string>mp;
    unordered_set<string>st;
    for (int i = 0; i <n ; ++i) {
        string tmp,tmp1;cin>>tmp1>>tmp;
        mp[tmp1]=tmp;
        if (st.count(tmp1)){
        st.insert(tmp);
        }else
            vc.push_back(tmp1),st.insert(tmp1),st.insert(tmp);

    }
    cout<<vc.size()<<endl;
    for (const auto& x:vc) {
        cout<<x<<" "<<dfs(x,mp)<<endl;
    }
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}