//Author: Akash Gautam (@geekblower)
//Date: 07-08-2022
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define GEEKBLOWER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int
#define TEST_CASES create(t);while(t--)
#define SOLUTION solve(); return 0;
#define display(n) cout<<n<<endl;
#define VI vector<int>
#define PB push_back
#define ALL(a) a.begin(),a.end()
#define SORT(a) sort(ALL(a))
#define loop(i,a,b,c) for(int i=a;i<b;i+=c)
#define revloop(i,a,b,c) for(int i=a;i>=b;i-=c)
#define start_loop loop(i,0,n,1)
#define start_revloop revloop(i,n,0,1)
#define create(n) int n;cin>>n;
#define def(a,n) int a[n];start_loop cin>>a[i];
#define print(a) for(auto i : a){cout<<i<<" ";}cout<<endl;
#define vector(a,n) VI a;loop(i,0,n,1){int x;cin>>x;a.PB(x);}
inline int GCD(int a,int b){return !b?a:GCD(b,a%b);}
const int MOD = 1000000007;

void solve() {
    create(n)
    string str;
    cin>>str;
    
    cout<<(char)((int)str[0] - 32);
    
    loop(i, 1, n, 1) {
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u') {
            int count = 0;
            
            loop(j, i, n, 1) {
                if(str[j]!='a' && str[j]!='e' && str[j]!='i' && str[j]!='o' && str[j]!='u') {
                    count++;
                    i++;
                } else {
                    i = j-1;
                    break;
                }
            }
            
            cout<<count;
        } else {
            cout<<str[i];
            int j = i;
            
            while(str[i] == str[j]) {
                j++;
            }
            
            i = j-1;
        }
    }
    
    cout<<endl;
}

int32_t main() {
    GEEKBLOWER
    TEST_CASES
    SOLUTION
}
