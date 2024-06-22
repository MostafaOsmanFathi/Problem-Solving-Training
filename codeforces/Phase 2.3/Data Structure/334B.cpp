#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"respectable":"ugly")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(a,b) (((a)/gcd(a,b))*(b))
#define inf 0x3f3f3f3f3f3f3f3fLL
#define mSet(arr,value) memset((arr),(value),(sizeof (arr)))
#define int long long
using namespace std;

void solve(){
///==================================================
    pair<int,int>pa[8];
    map<int,vector<int>>mp;
    set<pair<int,int>>st;

    for (int i = 0; i < 8; ++i) {
        cin>>pa[i].first;
        cin>>pa[i].second;
        if (st.count(pa[i])){
            outCondtion(false);
            return;
        }
        st.insert(pa[i]);
        mp[pa[i].first].push_back(pa[i].second);
    }
    if (mp.size()!=3){
        outCondtion(false);
        return;
    }
    auto it=mp.begin();
    auto t1=*it++,t2=*it++,t3=*it;
    std::sort(t1.second.begin(), t1.second.end());
    std::sort(t2.second.begin(), t2.second.end());
    std::sort(t3.second.begin(), t3.second.end());

    outCondtion(t1.second==t3.second and t1.second.front()==t2.second.front() and t1.second.back()==t2.second.back());
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}