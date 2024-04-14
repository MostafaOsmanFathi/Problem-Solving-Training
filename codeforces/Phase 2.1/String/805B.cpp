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
const char tmp[]="ab";
void solve(){
///==================================================
    int n;cin>>n;
    string s(n,'-');
    s.at(0)='a';
    if (n==1){
        cout<<s;
        return;
    }
    s.at(1)='b';
    for (int i = 2; i <n ; ++i) {
        if (s.at(i-2)=='a')
            s.at(i)='b';
        else
            s.at(i)='a';
    }
    cout<<s;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}