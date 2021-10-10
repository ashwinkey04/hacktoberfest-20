#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    int cnt = 0;
    int a, b, c, tot, sa, sb, sc;
    while(t--){
        cin >> a >> b >> c >> tot >> sa >> sb >> sc;
        bool can = (sa >= a && sb >= b && sc >= c && sa + sb + sc >= tot);
        string ans = can ? "YeS" : "nO";
        cout << ans << endl;
    }
}