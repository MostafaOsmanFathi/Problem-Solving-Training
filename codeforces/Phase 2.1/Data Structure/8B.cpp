#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"OK":"BUG")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(x,y) ((x/__gcd(x,y))*y)
#define int long long
using namespace std;

void solve(){
///==================================================
    string s;cin>>s;
    int x{0},y{0};
    bool OneT{false};
    set<pair<int,int>>st{{0,0}};
    for (const auto& ch:s) {
        if (ch=='U'){
            ++x;
        }else if (ch=='D'){
            --x;
        }else if (ch=='R'){
            ++y;
        }else{
            --y;
        }
        bool t1=(st.count({x+1,y})&&ch!='D');
        bool t2=(st.count({x-1,y})&&ch!='U');
        bool t3=st.count({x,y+1})&&ch!='L';
        bool t4=st.count({x,y-1})&&ch!='R' ;
        if (st.count({x,y})||t1||t2||t3||t4){
            outCondtion(false);
            return;
        }else
            st.insert({x,y}),OneT= true;
    }
    outCondtion(true);

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}