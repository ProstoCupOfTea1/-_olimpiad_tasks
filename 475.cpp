//https://acmp.ru/?main=task&id_task=475

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
 
using namespace std;
 
int main() {
    int a, b, c;
    vector<int> m;
    while (cin >> a) {
        m.push_back(a);
    }
 
    sort(m.begin(), m.end());
 
    c = m[1] - m[0];
    b = size(m);
    int i = 1;
    for (i; i + 1 < b; i++) {
        if (m[i + 1] - m[i] != c) {
            cout << "No";
            break;
        }
    }
    if (i + 1 == b)
        cout << "Yes";
}
