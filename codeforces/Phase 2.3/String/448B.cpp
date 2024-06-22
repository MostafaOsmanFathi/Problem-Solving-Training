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
    string s1,s2;cin>>s1>>s2;
    if (s1.find(s2)!=-1){
        cout<<"automaton"<<endl;
        return;
    }
    map<char,int>mp,mpReF;
    for (const auto& x:s2) {
        ++mpReF[x];
    }
    for (const auto& x:s1.substr(0,s2.size())) {
        ++mp[x];
    }

    int con{0};
    for (int i = 0; i <s1.size()and con<s2.size() ; ++i) {
        if (s1.at(i)==s2.at(con))
            ++con;
    }
    if (con==s2.size()){
        cout<<"automaton"<<endl;
        return;
    }

    for (int l=0,r = s2.size(); r < s1.size()+1;l,++r) {
        bool isEq{true};
        for (const auto& x:mpReF) {
            if (mp[x.first]!=x.second){
                isEq=false;
                break;
            }
        }
        if (isEq){
            cout<<((s1.size()>s2.size())?"both":"array")<<endl;
            return;
        }
        if (r!=s1.size()) {
            ++mp[s1.at(r)];
            --mp[s1.at(l++)];
        }
    }



    mp.clear();
    for (const auto& x:s1) {
        ++mp[x];
    }
    for (const auto& x:mpReF) {
        if (x.second>mp[x.first]){
            cout<<"need tree"<<endl;
            return;
        }
    }
    cout<<"both"<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

    //tloop
    solve();

    return 0;
}