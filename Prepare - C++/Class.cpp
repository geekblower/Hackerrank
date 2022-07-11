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

class Student {
    int age;
    int standard;
    string first_name;
    string last_name;
    
public:
    Student() {
        age = 0;
        standard = 0;
        first_name.clear();
        last_name.clear();
    }
    
    void set_age(int newAge){
        age = newAge;
    }
    
    void set_standard(int newStandard) {
        standard = newStandard;
    }
    
    void set_first_name(string newFirst_name) {
        first_name = newFirst_name;
    }
    
    void set_last_name(string newLast_name) {
        last_name = newLast_name;
    }
    
    int get_age() {
        return age;
    }
    
    int get_standard() {
        return standard;
    }
    
    string get_first_name() {
        return first_name;
    }
    
    string get_last_name() {
        return last_name;
    }
    
    string to_string() {
        stringstream ss;
        char c = ',';
        ss << age << c << first_name << c << last_name << c << standard;
        return ss.str();
    }
    
};

int32_t main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}