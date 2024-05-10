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
    int n,m;cin>>n>>m;
    string s;cin>>s;
    s=" "+s;
    for (int i = 1; i <=n-m ; ++i) {
        if (s.at(i)=='.' and s.at(i+m)=='.')
            s.at(i)='0',s.at(i+m)='1';
        else if (s.at(i)=='.')
            s.at(i)=(!(s.at(i+m)-'0'))+'0';
        else if (s.at(i+m)=='.')
            s.at(i+m)=(!(s.at(i)-'0'))+'0';
        continue;
        cout<<i<<" "<<m+i<<endl;
        cout<<s.at(i)<<" "<<s.at(m+i)<<endl<<endl;
    }
    bool tmp{false};
    for (int i = 1; i <=n-m ; ++i) {
        if (s.at(i)==s.at(m+i) and s.at(i)!='.'){
            continue;
        }else
            tmp|= true;
    }
    if (!tmp){
        cout<<"No\n";
        return;
    }
    for (int i = 0; i <s.size() ; ++i) {
        if (s.at(i)=='.')
            s.at(i)='0';
    }
    s.erase(0,1);
    cout<<s;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}