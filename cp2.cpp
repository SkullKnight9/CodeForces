#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_set>

using namespace std;

int highestfreq(vector<int> v) {

    map<int, int> M;
    int freq = 0;

    for (int element : v) {
        if (M.find(element) == M.end()) {
            M[element] = 1;
        } else {
            M[element]++;
        }
        freq = max(freq, M[element]);
    }
    return freq;
}

int solution(vector<int> &A) {
    int N = A.size();

    if (N == 2) {
        return 2;
    }

    sort(A.begin(), A.end());

    unordered_set<int> unique;
    int commondiff = A[1] - A[0];
    int maxc = 1;

    unique.insert(A[0]);

    for (int i = 1; i < N; i++) {
        int diff = A[i] - A[i - 1];
        if (diff == commondiff) {
            unique.insert(A[i]);
        } else {
            commondiff = diff;
            maxc = max(maxc, static_cast<int>(unique.size()));
            unique.clear();
            unique.insert(A[i - 1]);
            unique.insert(A[i]);
        }
    }

    int count=highestfreq(A);

    if(maxc>count)
        return maxc+1;
    else
        return count;
}

int main() {
    vector<int> A1 = {4, 7, 1, 5, 3};
    cout << solution(A1) << endl; // Output: 4

    vector<int> A2 = {15, 10,12};
    cout << solution(A2) << endl; // Output: 3

    vector<int> A3 = {18, 26, 18, 24, 24, 20, 22};
    cout << solution(A3) << endl; // Output: 5

    vector<int> A4 = {10, 12, 12, 12, 12, 12,12, 14, 15, 15};
    cout << solution(A4) << endl; // Output: 5

    return 0;
}