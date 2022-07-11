//Author: Akash Gautam (@geekblower)
//Date: 11-07-2022
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

vector<int> parseInts(string str) {
	stringstream ss;
    ss<<str;
    
    int a;
    char ch;
    VI answer;
    
    while(ss>>a) {
        answer.PB (a);
        ss>>ch;
    }
    
    return answer;
}

int32_t main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

void solve() {
    string s1, s2, s3;
    char a1, a2;
    int len1, len2;
    
    cin>>s1;
    cin>>s2;
    
    len1 = s1.size();
    len2 = s2.size();
    
    cout<<len1<<" "<<len2<<"\n";
    
    s3 = s1+s2;
    cout<<s3;
    
    a1 = s1[0];
    a2 = s2[0];
    s1[0] = a2;
    s2[0] = a1;
    
    cout<<"\n"<<s1<<" "<<s2;
}

int32_t main() {
    GEEKBLOWER
    SOLUTION
}
