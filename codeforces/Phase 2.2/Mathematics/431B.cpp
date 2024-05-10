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
    int arr[5][5];
    int perm[5];
    for (int i = 0; i <5 ; ++i) {
        perm[i]=i;
        for (int j = 0; j < 5; ++j) {
            cin>>arr[i][j];
        }
    }
//    perm[0]=1;
//    perm[1]=2;
//    perm[2]=0;
//    perm[3]=4;
//    perm[4]=3;
    int ans{0};

    do {
        int res{0};
        for (int i = 1; i <5 ; ++i) {
            res+=(arr[perm[i]][perm[i-1]]+arr[perm[i-1]][perm[i]]);
        }
        res+=(arr[perm[2]][perm[3]]+arr[perm[3]][perm[2]]);
        res+=(arr[perm[4]][perm[3]]+arr[perm[3]][perm[4]]);
        ans= max(ans,res);
    } while (next_permutation(perm,perm+5));
        cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}