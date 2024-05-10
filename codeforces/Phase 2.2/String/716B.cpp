#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"YES":"NO")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(x,y) ((x/__gcd(x,y))*y)
#define inf 0x3f3f3f3f3f3f3f3fLL
#define int long long
using namespace std;
vector<char> missingChar( map<char,int>&mp){
    vector<char>vc;

    for (char i = 'A'; i <= 'Z'; ++i) {
        if (!mp[i])
            vc.push_back(i);
    }
    return vc;
}
void solve(){
///==================================================
    string s;cin>>s;
    if (s.size()<26){
        cout<<-1<<endl;
        return;
    }
    map<char,int>mp;
    for (int i = 0; i < 26; ++i) {
        ++mp[s.at(i)];
    }
    auto vc= missingChar(mp);
    int tmp= vc.size();
    if (tmp==mp['?']){
        for (int i = 0; i < s.size(); ++i) {
            if (s.at(i)=='?')
                if (!vc.empty()) {
                    s.at(i) = vc.back();
                    vc.pop_back();
                }else
                    s.at(i)='A';
        }
        cout<<s<<endl;
        return;
    }
    for (int i = 26,l=0; i <s.size() ; ++i,++l) {
        --mp[s.at(l)],++mp[s.at(i)];
        if (s.at(l)=='?')
            s.at(l)='A';
        vc= missingChar(mp);
        tmp= vc.size();

        if (tmp==mp['?']){
            for (int j = l+1; j <s.size() ; ++j) {
                if (s.at(j)=='?'){
                    if (!vc.empty()) {
                        s.at(j) = vc.back();
                        vc.pop_back();
                    }else
                        s.at(j)='A';
                }
            }
            cout<<s<<endl;
            return;
        }
    }
    cout<<-1<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}