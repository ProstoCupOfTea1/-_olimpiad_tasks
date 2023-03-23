//https://acmp.ru/?main=task&id_task=138


#include <iostream>
#include <vector>
#include <set>
#include <map>
 
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
     
    map<int, vector<pair<int, int>>> c;
    int t, a, b;
    for (int i = 0; i < m; i++) {
        cin >> t >> a >> b;
        if (a != t)
            c[t].push_back(make_pair(a, b));
    }
     
    vector<int> s(n, 30000);
 
    s[0] = 0;
    for (int i = 0; i < n; i++) {
        for (const auto& nod : c) {
            for (const auto& el : nod.second) {
                if (s[nod.first-1] != 30000)
                    s[el.first-1] = min(s[el.first-1], s[nod.first-1] + el.second);
            }
        }
    }
 
    for (int i = 0; i < n; i++)
        cout << s[i] << " ";
}
