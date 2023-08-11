#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int smallest(int arr[], int size) {
    if (size <= 0) {
        return -1;
    }

    int smallest = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    return smallest;
}

int findIndex(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1; 
}

int main() {

    int t;
    cin >> t;

    while (t--) {
        int x, n;
        cin >> x >> n;

        int a[x];
        int b[x];

        for (int i = 0; i < x; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < x; i++) {
            cin >> b[i];
        }

        while (n--) {
            int maxBIndex = distance(b, max_element(b, b + x));
            int minA = smallest(a, x);
            int minAIndex = findIndex(a, x, minA);

            if (minAIndex != -1 ) {
                swap(a[minAIndex], b[maxBIndex]);
                sort(a,a+x);
                sort(b,b+x);
            }
        }

        cout << accumulate(a, a + x, 0) << endl;
    }

    return 0;
}
