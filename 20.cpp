//https://acmp.ru/?main=task&id_task=20

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
    vector<int> m(n);
    for (int i = 0; i < n; i++)
        cin >> m[i];
 
    bool bm;
    int c = 1;
    int maxc = 0;
 
    if (n > 1) {
        if (m[0] > m[1])
            bm = false;
        else
            bm = true;
 
        if (m[0] != m[1])
            c += 1;
 
        for (int i = 1; i < n - 1; i++) {
            if ((bm && (m[i] > m[i + 1])) || (!bm && (m[i] < m[i + 1]))) {
                bm = !bm;
                c += 1;
            }
            else {
                maxc = max(c, maxc);
                c = 1;
                if (m[i] != m[i + 1]) {
                    c += 1;
                }
            }
        }
    }
    maxc = max(c, maxc);
    cout << maxc;
}
