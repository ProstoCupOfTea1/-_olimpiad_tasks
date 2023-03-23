//https://acmp.ru/?main=task&id_task=267

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
 
using namespace std;
 
int main() {
 
    int n, a, b, t, c;
 
    cin >> n >> a >> b;
 
    long int l = 0;
    long int r = 100000000000;
    while (l != r && r != l + 1) {
        t = (r - l) / 2 + l;
        c = t / min(a, b) + (t - min(a, b)) / max(a, b);
        if (c >= n)
            r = t;
        else
            l = t;
    }
     
    cout << r;
}
