#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"OK":"WRONG_ANSWER")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(x,y) ((x/__gcd(x,y))*y)
#define int long long
using namespace std;

void solve(){
///==================================================
    string s1,s2;cin>>s1>>s2;
    if (s1.size()!=s2.size()){
        outCondtion(false);
        return;
    }
    int frq1[10]{0};
    for (auto& x:s1) {
        ++frq1[x-'0'];
    }
    string ans{};
    for (int i = 1; i <10 ; ++i) {
        if (!ans.empty() and frq1[0]){
            while (frq1[0])
                ans.push_back('0'),--frq1[0];
        }else if (frq1[i]){
            ans.push_back('0'+i);
            --frq1[i--];
        }

    }
    if (frq1[0])
        ans.push_back('0');
    outCondtion(ans==s2)
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}