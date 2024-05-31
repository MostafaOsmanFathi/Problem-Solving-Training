#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"yes":"no")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(x,y) ((x/__gcd(x,y))*y)
#define int long long
using namespace std;

void solve(){
///==================================================
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    int l=0,r=-1;

    for (int i = 1; i <n ; ++i) {

        if ((arr[i]>=arr[i-1]&&r==-1)||(arr[i]>arr[i-1]&&r!=-1)) {
            if (r!=-1)break;
            l = i;
        }else
            r=i;
    }
    if (r==-1){
        outCondtion(true);
        cout<<"1 1";
        return;
    }
    reverse(arr+l,arr+r+1);
    if (is_sorted(arr,arr+n)){
        outCondtion(true);
        cout<<l+1<<" "<<r+1;
        return;
    }
    outCondtion(false)

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}