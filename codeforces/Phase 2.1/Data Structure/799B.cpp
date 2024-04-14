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
    map<int,set<int>>mp;
    map<int,pair<int,int>>mpPrice;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    for (int i = 0; i < n; ++i) {
        int tmp;cin>>tmp;
        mp[tmp].insert(arr[i]);
        mpPrice[arr[i]].first=tmp;
    }
    for (int i = 0; i < n; ++i) {
        int tmp;cin>>tmp;
        mp[tmp].insert(arr[i]);
        mpPrice[arr[i]].second=tmp;
    }
    int q;cin>>q;
    set<int>Prices;
    while (q--){
        int qq;cin>>qq;
        if (mp.count(qq)){
            auto &st=mp[qq];
            int tmp=*st.begin();
            if (tmp==0)
                cout<<"-1 ";
            else
                cout<<tmp<<" ";
            auto &tmp2=mpPrice[tmp];
            mp[tmp2.first].erase(tmp);
            mp[tmp2.second].erase(tmp);
            if (st.empty())
                mp.erase(qq);
        }else
            cout<<"-1 ";

    }

///==================================================
}
signed main() {MOSTAFAOSMAN()


//    tloop
    solve();

    return 0;
}