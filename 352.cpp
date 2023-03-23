//https://acmp.ru/?main=task&id_task=352

#include <iostream>
using namespace std;
 
int main() {
    int n, j;
    cin >> n;
 
    for (int i = n/2 + 1; i <= min(n / 2 + 10, n - 1); i++) {
        j = n - i;
        for (int k = 2; k <= 10; k++) {
            if (j % k == 0 && i % k == 0)
                break;
            if (k == 10) {
                cout << min(i, j) << " " << max(i, j);
                return 0;
            }
        }
    }
    return 0;
}
