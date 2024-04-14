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

void solve(){
///==================================================
    int n;cin>>n;
    int mxWord{0},cntWord{0},NumOfWords{0};
    int depth{0};
    bool isWord{false};
    for (int i = 0; i < n; ++i) {
        char x;cin>>x;
        if (x=='('){
            ++depth,mxWord= max(mxWord,cntWord),cntWord=0;;
        }else if (x==')')
            --depth,NumOfWords+=isWord,isWord=false;

        if (depth){
            if (isalpha(x))isWord=true;
            else{
                NumOfWords+=isWord;
                isWord=false;
            }
        }else{
            if (isalpha(x))++cntWord;
            else{
                mxWord= max(mxWord,cntWord);
                cntWord=0;
            }

        }

    }
       mxWord= max(mxWord,cntWord);
    cout<<mxWord<<" "<<NumOfWords<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}