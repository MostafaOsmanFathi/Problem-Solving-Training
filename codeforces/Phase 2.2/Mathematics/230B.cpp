#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"YES":"NO")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(x,y) ((x/__gcd(x,y))*y)
#define int long long
using namespace std;
bitset<10000010> bs;
vector<int>Primes;
void seive(int LIM=1000000){
    bs[0]=bs[1]=true;
    for (int i = 2; i <=LIM ; ++i) {
        if (!bs[i])
            Primes.push_back(i);
        for (int j = i*i; j <=LIM ; j+=i) {bs[j]=true;}

    }
}
int CountDivs(int n){
    int cnt{1};
    for (int i = 0; i <Primes.size()&&Primes.at(i)*Primes.at(i)<=n ; ++i) {
        if (n%Primes.at(i)==0){
            int tm{0};
            while (n%Primes.at(i)==0)
                n/=Primes.at(i),++tm;
            cnt*=(tm+1);
        }
    }
    if (n!=1)
        cnt*=2;

    return cnt;
}
void solve(){
///==================================================
    tloop{
        int n;cin>>n;
        ld tmp=sqrtl(n);
        outCondtion(ceil(tmp)== floor(tmp)&&n!=1&&!bs[tmp]);
    }
///==================================================
}
signed main() {MOSTAFAOSMAN()
//    tloop
    seive(1e6+100);
    solve();

    return 0;
}