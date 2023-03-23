//https://acmp.ru/?main=task&id_task=71


#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 
int F(int i, int a, int b, vector<int>& n) {
    if (i == n.size()) {
        return abs(a - b);
    }
     
    return min(F(i + 1, a, b + n[i], n), F(i + 1, a + n[i], b, n));
}
 
int main() {
    int w;
    cin >> w;
 
    vector<int> n(w);
 
    for (int i = 0; i < w; i++) {
        cin >> n[i];
    }
 
    cout << F(0, 0, 0, n);
}
