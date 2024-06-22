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
    int n;cin>>n;
    int arr[n][n];
    int x{0},y{0},mx{1},ss{0};
    for (int i = 0; i < n; ++i) {
        int sum{0};
        bool fl{false};
        for (int j = 0; j < n; ++j) {
            cin>>arr[i][j];
            if (!arr[i][j])
                x=i,y=j,fl=true;
            sum+=arr[i][j];
        }
        if (fl)
            ss=sum;
        mx= max(sum,mx);
    }
    int ans=mx-ss;
    if (ans==0){
        cout<<-1<<endl;
        return;
    }
    arr[x][y]=ans;
    int s{0},sss{0};
    for (int i = 0; i < n; ++i) {
        int s1{0},s2{0};
        for (int j = 0; j < n; ++j) {
            s1+=arr[i][j];
            s2+=arr[j][i];
        }
        if (s1!=mx or s2!=mx){
            cout<<-1<<endl;
            return;
        }
        s+=arr[i][i];
        sss+=arr[i][n-i-1];
    }
    if (sss!=mx or s!=mx){
        cout<<-1<<endl;
        return;
    }
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}