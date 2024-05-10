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
    int n;cin>>n;
    int arr[n];
    forloop(n) { cin >> arr[i];}
    int PreFix[n];
    PreFix[0]=arr[0];
    for (int i = 1; i <n; ++i) {PreFix[i]=PreFix[i-1]+arr[i];}
    sort(arr,arr+n);
    int PreFixOrdered[n];
    PreFixOrdered[0]=arr[0];
    for (int i = 1; i <n; ++i) {PreFixOrdered[i]=PreFixOrdered[i-1]+arr[i];}
    tloop{
        int type,l,r;cin>>type>>l>>r;
        --l,--r;
        if (type==1){
            cout<<PreFix[r]-((l==0)?0:PreFix[l-1])<<endl;
        }else{
            cout<<PreFixOrdered[r]-((l==0)?0:PreFixOrdered[l-1])<<endl;
        }

    }


}
signed main() {MOSTAFAOSMAN()

    solve();

    return 0;
}