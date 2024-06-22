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

void rec(int l,int r,set<pair<int,int>>&st,const int& n){
    if (r==l)return;

    for (int i = n-1; i >=1 ; --i) {
        if ((l+i)<=r and st.count({l, l + i})){
            st.erase({l,l+i});
            rec(l+i,r,st,n);
            break;
        }
    }
}
void solve(){
///==================================================
    int n;cin>>n;
    if (n==2){
        cout<<2<<endl;
        return;
    }
    int res{0};
    set<pair<int,int>>st;
    for (int i = 1; i <n ; ++i) {
        for (int j = 0; j+i <=n ; ++j) {
            st.insert({j,j+i});
        }
    }

    int ans{1};
    for (int i = n-1; i >=1 ; --i) {
        for (int j = 0; j+i <=n ; ++j) {
            if (st.count({j,j+i})) {
                int l = j, r = j + i;
                if (st.count({0, l}))
                    st.erase({0, l});
                else if (l){
                    rec(0,l,st,n);
                }


                if (st.count({r, n}))
                    st.erase({r, n});
                else if (n!=r){
                    rec(r,n,st,n);
                }
                st.erase({l,r});
                ++ans;
            }
        }
    }
    cout<<ans;

///==================================================
}
signed main() {MOSTAFAOSMAN()
//    tloop
    solve();

    return 0;
}