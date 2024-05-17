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
    set<int>st;
    for (int i = 0; i <n ; ++i) {
        int tmp;cin>>tmp;
        st.insert(tmp);
    }
    if (st.size()<=2){
        outCondtion(true)
        return;
    }else if (st.size()>=4){
        outCondtion(false)
        return;
    }
    int x=*st.begin();
    int y=*++st.begin();
    int z=*++++st.begin();
    outCondtion(y+(y-x)==z)

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}