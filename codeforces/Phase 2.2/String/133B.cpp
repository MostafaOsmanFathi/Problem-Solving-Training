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
const int mod=1000003;
map<char,string>mp{
        {'>',"1000"},
        {'<',"1001"},
        {'+',"1010"},
        {'-',"1011"},
        {'.',"1100"},
        {',',"1101"},
        {'[',"1110"},
        {']',"1111"},
};
void solve(){
///==================================================
    string s;cin>>s;
    string res;
    for (int i = 0; i <s.size() ; ++i) {
        res+=mp[s.at(i)];
    }
    int twos{1},ans{0};
    for (int i = res.size()-1; i >=0 ; --i,twos=((twos%mod)*2)%mod) {
        if (res.at(i)=='1')
            ans=((twos%mod)+(ans%mod))%mod;
    }
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}