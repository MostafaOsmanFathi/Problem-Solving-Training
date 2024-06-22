#include <bits/stdc++.h>
#define max_val INT_MAX
#define min_val INT_MIN
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"YES":"NO")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define forloop(n) for (int i = 0; i < n; ++i)
#define int long long
#define endl "\n"
#define MOSTAFAOSMAN()    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define arthmaticSum(a1,an,n) (((a1+an)*n)/(double)2)
#define geomatricSum(a,r,n) static_cast<long double>((a*(1-pow(r,n)))/(1-r))
#define ncr(n,r) (tgamma(n+1) / (tgamma(r+1) * tgamma(n-r+1)))
#define gcd(x,y) __gcd(x,y)
#define lcm(x,y) ((x/__gcd(x,y))*y)
//bool cmp(string& a,string& b){return (a+b)<(b+a);}
using namespace std;
const int SZ{100005};
const int SZZ{10000000};
void solve() {
    int n,m;cin>>n>>m;
    char PresidentColor;cin>>PresidentColor;
    char arr[200][200];
    for (int i = 2; i <=n+1; ++i) {
        for (int j = 2; j <=m+1; ++j) {
            cin>>arr[i][j];
        }
    }
    unordered_map<char,bool>mp;
    for (int i = 2; i <=n+1; ++i) {
        for (int j = 2; j <=m+1; ++j) {
            if(arr[i][j]==PresidentColor){
                if (arr[i][j+1]!=PresidentColor&&isalpha(arr[i][j+1])){mp[arr[i][j+1]]= true;}
                if (arr[i][j-1]!=PresidentColor&&isalpha(arr[i][j-1])){mp[arr[i][j-1]]= true;}
                if (arr[i+1][j]!=PresidentColor&&isalpha(arr[i+1][j])){mp[arr[i+1][j]]= true;}
                if (arr[i-1][j]!=PresidentColor&&isalpha(arr[i-1][j])){mp[arr[i-1][j]]= true;}
            }
        }
    }

    cout<<mp.size();

}
signed main() {MOSTAFAOSMAN()

    solve();

    return 0;
}