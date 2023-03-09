


#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int c = 0, c1 = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] > 0) {
                c++;
            } else {
                c1++;
            }
        }
        if(n%2==0)
        {
                for(int i = 0; i < n - c1; i++) {
                cout << i + 1 << " ";
            }
            for(int i =c1 ; i>0; i--) {
                cout << c-c1+i-1<< " ";
            }
            cout << "\n"; 
        }
        else
        {
                 for(int i = 0; i < n - c1; i++) {
                cout << i + 1 << " ";
            }
            for(int i = c1 ; i>0; i--) {
                cout << c-c1+i-1<< " ";
            }
            cout << "\n";
            
        }
       
        for(int i = 0; i < abs(c1); i++) {
            cout << "1 0 ";
        }
        for(int i = 1; i <= n - 2 * abs(c1); i++) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
