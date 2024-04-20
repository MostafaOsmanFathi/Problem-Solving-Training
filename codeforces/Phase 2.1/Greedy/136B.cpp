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
    int a,b;cin>>a>>b;
    string tmp1,tmp2;
    while (a){
        tmp1.push_back(a%3+'0');
        a/=3;
    }
    while (b){
        tmp2.push_back(b%3+'0');
        b/=3;
    }

    while (tmp1.size()!=tmp2.size())
        if (tmp1.size()>tmp2.size())tmp2.push_back('0');
        else tmp1.push_back('0');

    reverse(tmp1.begin(), tmp1.end());
    reverse(tmp2.begin(), tmp2.end());
    int ans{0};
    for (int i = tmp1.size()-1,three{1}; i >=0 ; --i,three*=3) {
        int d1=tmp1.at(i)-'0';
        int d2=tmp2.at(i)-'0';
       ans+=three*((((d2-d1)%3)+3)%3);
    }
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}