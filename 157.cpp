//https://acmp.ru/?main=task&id_task=157


#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
 
using namespace std;
long long fact(int n) {
    if (n == 1)
        return 1;
 
    return n * fact(n - 1);
}
int main() {
    string n;
    cin >> n;
    long long s;
    vector<int> m(28, 0);
    for (int i = 0; i < n.size(); i++) {
        m[(int) n[i] - 97] += 1;
    }
    s = fact(n.size());
    for (int i = 0; i < m.size(); i++) {
        if (m[i] == 0)
            continue;
 
        s /= fact(m[i]);
    }
    cout << s;
}
