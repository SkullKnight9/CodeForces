#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int>& A) {
    int len = A.size();

    // Removing first two in move 1
    int sumFirst = A[0] + A[1];
    int sfc = 1;
    for (int i = 2; i < len;) {
        if (abs(i - len) < 2)
            break;

        int sum_f = A[i] + A[i + 1];
        int sum_l = A[len - 1] + A[len - 2];
        int sum_fl = A[i] + A[len - 1];

        if (sumFirst == sum_f) {
            i += 2;
            sfc++;
        } else if (sumFirst == sum_l) {
            len -= 2;
            sfc++;
        } else if (sumFirst == sum_fl) {
            i++;
            len--;
            sfc++;
        } else
            break;
    }

    // Removing last two in move 1
    len = A.size();
    int start = 0;
    int sumLast = A[len - 1] + A[len - 2];
    int slc = 1;
    for (int i = len - 2; i > start;) {
        if (abs(i - start) < 2)
            break;

        int sum_f = A[start] + A[start + 1];
        int sum_l = A[i - 1] + A[i - 2];
        int sum_fl = A[i - 1] + A[start];

        if (sumLast == sum_f) {
            start += 2;
            slc++;
        } else if (sumLast == sum_l) {
            i -= 2;
            slc++;
        } else if (sumLast == sum_fl) {
            i--;
            start++;
            slc++;
        } else
            break;
    }

    // Removing first and last in move 1
    len = A.size();
    start = 1;
    int sumFirstLast = A[0] + A[len - 1];
    int sflc = 1;
    for (int i = len - 1; i > start;) {
        if (abs(i - start) < 2)
            break;

        int sum_f = A[start] + A[start + 1];
        int sum_l = A[i - 1] + A[i - 2];
        int sum_fl = A[i - 1] + A[start];

        if (sumFirstLast == sum_f) {
            start += 2;
            sflc++;
        } else if (sumFirstLast == sum_l) {
            i -= 2;
            sflc++;
        } else if (sumFirstLast == sum_fl) {
            i--;
            start++;
            sflc++;
        } else
            break;
    }

    return max(max(sfc, slc), sflc);
}

int main() {
    // Test the solution function
    vector<int> A = {1, 2, 3, 0, 3, 2, 1, 0, 1};
    int result = solution(A);
    cout << "Result: " << result << endl;

    return 0;
}
