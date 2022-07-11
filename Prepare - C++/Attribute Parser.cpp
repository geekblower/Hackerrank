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
#define vector(a,n) VI a;loop(i,0,m,1){int x;cin>>x;a.PB(x);}
inline int GCD(int a,int b){return !b?a:GCD(b,a%b);}
const int MOD = 1000000007;

map <string, string> tagMap;

void createMap(int &n, string pretag) {
    if(!n)
        return;
    
    string line, tag, attr, value;
    getline(cin, line);
    
    int i = 1;
    
    if(line[i]=='/') {                                      //Found closing tag
        while(line[i]!='>')
            i++;
        
        if(pretag.size()>(i-2))                             //Update tag
            tag = pretag.substr(0,pretag.size()-i+1);
        else
            tag = "";
    } else {                                               //Found opening tag
        while(line[i]!=' ' && line[i]!='>')
            i++;
        
        tag = line.substr(1,i-1);                           //Update tag
        
        if(pretag!="")
            tag = pretag + "." + tag;
        
        int j;
        while(line[i]!='>') {                               //Go through attributes
            j = ++i;
            
            while(line[i]!=' ')
                i++;
            
            attr = line.substr(j,i-j);                      //Attribute name
            
            while(line[i]!='\"')
                i++;
            
            j = ++i;
            
            while(line[i]!='\"')
                i++;
            
            value = line.substr(j,i-j);                     //Attribute value
            i+= 1;
            tagMap[tag + "~" + attr] = value;
        }
    }
    
    createMap(--n, tag);
}

void solve() {
    create(n)
    create(q)
    
    cin.ignore();
    createMap(n,"");
    string attr, value;
    
    while(q--) {
        getline(cin,attr);
        value = tagMap[attr];
        
        if(value=="")
            value = "Not Found!";
        
        display(value)
    }
}

int32_t main() {
    GEEKBLOWER
    SOLUTION
}
