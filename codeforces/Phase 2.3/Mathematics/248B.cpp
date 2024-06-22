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
int log10Edit(__int128 n){
    int ans{0};
    while (n)
        n/=10,++ans;
    return ans;
}
/*4:1050
5:10080
6:100170
7:1000020
8:10000200
9:100000110*/
void solve2(int n){
///==================================================
    __int128 l=0,r=1e18;
    while (r-l>1){
        __int128 mid=(l+r)/2;
        if ((int)log10Edit(mid*210)>=n)
            r=mid;
        else
            l=mid;
    }
    if ((int)log10Edit(r*210)!=n)
        cout<<-1<<endl;
    else cout<<(int)(210*r)<<endl;
///==================================================
}
const string arr[]={"50","80","170","20","200","110"};
void solve(){
    int n;cin>>n;
    if (n<3) {
        cout << -1 << endl;
        return;
    }else if (n==3){
        cout<<210<<endl;
        return;
    }
    string tmp=arr[(n-4)%6];
    cout<<"1"+string(n-tmp.size()-1,'0')+tmp<<endl;
}
signed main() {MOSTAFAOSMAN()

//    tloop
//        for (int i = 1; i <=20 ; ++i) {
//        cout<<i<<":";solve2(i);
//    }
    solve();
    return 0;
}