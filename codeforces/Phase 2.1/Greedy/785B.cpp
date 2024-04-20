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
typedef pair<int,int> pa;
void solve(){
///==================================================
    pa mx1{INT_MIN,INT_MIN},mn1{INT_MAX,INT_MAX};
    pa mx2{INT_MIN,INT_MIN},mn2{INT_MAX,INT_MAX};
    int n;cin>>n;
    while (n--){
        pa tmp;
        cin>>tmp.first;
        cin>>tmp.second;
        if (mx1.first<tmp.first)
            mx1=tmp;

        if (mn1.second>tmp.second)
            mn1=tmp;

    }
    cin>>n;
    while (n--){
        pa tmp;
        cin>>tmp.first;
        cin>>tmp.second;
        if (mx2.first<tmp.first)
            mx2=tmp;

        if (mn2.second>tmp.second)
            mn2=tmp;

    }

    if (mx1<mn2)swap(mx1,mn2);
    int res1=mx1.first-mn2.second;

    if (mx2<mn1)swap(mx2,mn1);
    int res2=mx2.first-mn1.second;
    cout<<max({res1, res2,0LL})<<endl;

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}