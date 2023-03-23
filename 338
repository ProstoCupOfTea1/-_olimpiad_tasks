//https://acmp.ru/?main=task&id_task=338

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
 
using namespace std;
 
void F(vector <vector <int>>& a, int x, int y) {
    a[x][y] = 2;
    if (x - 1 >= 0 && a[x - 1][y] == 0)
        F(a, x - 1, y);
    if (y - 1 >= 0 && a[x][y - 1] == 0)
        F(a, x, y - 1);
    if (x + 1 < a.size() && a[x + 1][y] == 0)
        F(a, x + 1, y);
    if (y + 1 < a[0].size() && a[x][y + 1] == 0)
        F(a, x, y + 1);
}
 
int main() {
    int n, m;
 
    cin >> n >> m;
     
    vector <vector <int>> a(n, vector <int>(m));
     
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
         }
    }
 
    int c = 0;
    bool t = false;
    int x, y;
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 0) {
                t = true;
                x = i;
                y = j;
                break;
            }
        }
        if (t)
            break;
    }
 
    int k = 0, l = 1;
    while (t) {
        F(a, x, y);
         
        c++;
 
        t = false;
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == 0) {
                    t = true;
                    x = i;
                    y = j;
                    break;
                }
            }
            if (t)
                break;
        }
    }
 
    cout << c;
     
    return 0;
}
