#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"YES":"NO")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(x,y) ((x/__gcd(x,y))*y)
//#define int long long
using namespace std;

void solve(){
///==================================================
    string s;cin>>s;
    int prefix[s.size()];
    prefix[s.size()-1]=0;
    prefix[0]=0;
    for (int i = 0; i <s.size()-1 ; ++i) {
        prefix[i+1]=(s.at(i)==s.at(i+1));
    }
    partial_sum(prefix,prefix+s.size(),prefix);
    tloop{
        int a,b;cin>>a>>b;
        --b,--a;
        cout<<prefix[b]-((a==0)?0:prefix[a])<<endl;

    };


///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}