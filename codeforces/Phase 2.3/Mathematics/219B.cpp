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
int countStr(const string& str){
    int res{0};
    for (int i = str.size()-1; i >= 0; --i) {
        if (str.at(i)=='9')++res;
        else break;
    }
    return res;
}
void solve(){
///==================================================
    int n,d;cin>>n>>d;
    string tmp;
    string nStr= to_string(n);
    int nines= countStr(nStr);
    string ans=nStr;


    for (int i =nStr.size()-1 ; i >=0 ; --i) {
        tmp.insert(tmp.begin(),nStr.at(i));
        int Subtract= stoll(tmp)+1;
        if (Subtract>d)break;
        if (string str=to_string(n-Subtract);countStr(str)>nines){
            nines= countStr(str);
            ans=str;
        }
    }
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}