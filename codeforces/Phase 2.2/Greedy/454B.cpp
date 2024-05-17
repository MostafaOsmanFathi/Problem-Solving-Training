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
int mod(int i ,int n){
    return ((i%n)+n)%n;
}
void solve(){
///==================================================
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i <n ; ++i) {
        cin>>arr[i];
    }
    if (is_sorted(arr,arr+n)){
        cout<<0<<endl;
        return;
    }
    int poss=0;
    for (int i = 1; i <n ; ++i) {
        if (arr[i]>=arr[i-1])
            poss=i;
        else break;
    }

    int shiftBy=n-poss-1;
    int arrShift[n];
    for (int i = 0; i < n; ++i) {
        arrShift[(i+shiftBy)%n]=arr[i];
    }
    if (!is_sorted(arrShift,arrShift+n)){
        cout<<-1<<endl;
        return;
    }

    cout<<shiftBy%n<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}