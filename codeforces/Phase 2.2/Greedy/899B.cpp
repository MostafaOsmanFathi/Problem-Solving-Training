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
    const string dates=        "312831303130313130313031312831303130313130313031312831303130313130313031312831303130313130313031312831303130313130313031";
    const string datesLeepYear="312931303130313130313031312931303130313130313031312931303130313130313031312931303130313130313031";
    const string MixdatesLeepYear="312931303130313130313031312831303130313130313031312931303130313130313031312831303130313130313031312931303130313130313031312831303130313130313031312931303130313130313031312831303130313130313031312931303130313130313031312831303130313130313031";
    int n;cin>>n;
    string ans;
    bool twoNine{false};
    while (n--){
        string tmp;cin>>tmp;
        ans+=tmp;
        if (tmp=="29" and twoNine){
            outCondtion(false);
            return;
        }
        if (tmp=="29")twoNine= true;
    }
    outCondtion(dates.find(ans)!=-1 or datesLeepYear.find(ans)!=-1 or  MixdatesLeepYear.find(ans)!=-1)
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}