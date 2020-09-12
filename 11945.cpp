#include <iostream>
using namespace std;
int n, m;
char a[11][11];
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i<n; i++)
        for (int j = 0; j < m / 2; j++)
            swap(a[i][j], a[i][m - j - 1]);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << a[i][j];
        }
        cout << '\n';
    }
}
