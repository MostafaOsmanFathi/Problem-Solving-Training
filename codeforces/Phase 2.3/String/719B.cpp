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
//#define int long long
using namespace std;

void solve(){
///==================================================
    int n;cin>>n;
    string s;cin>>s;
    int tmp1{0},tmp2{0},tmp3{0},tmp4{0};
    for (int i = 0; i <n ;++i) {
        if (i&1){
            if (s.at(i)=='b'){
                ++tmp2;
            }
            if (s.at(i)=='r'){
                ++tmp4;
            }
        }else {
            if (s.at(i) == 'r') {
                ++tmp1;
            }
            if (s.at(i) == 'b') {
                ++tmp3;
            }
        }
    }
  
   cout<<min(min(tmp1,tmp2)+max(tmp1,tmp2)- min(tmp1,tmp2),min(tmp3,tmp4)+max(tmp3,tmp4)- min(tmp3,tmp4))<<endl;

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}