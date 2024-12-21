#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
void findSumAndDifference(const vector<int>& arr, int M, int N) {
    if (M <= 0 || N <= 0 || M > arr.size() || N > arr.size()) {
        cout << "Illegal input" << endl;
        return;
    }
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());

    int mthMax = sortedArr[sortedArr.size() - M];
    int nthMin = sortedArr[N - 1];

    cout << "M-th Maximum: " << mthMax << ", N-th Minimum: " << nthMin << endl;
    cout << "Sum: " << mthMax + nthMin << ", Difference: " << mthMax - nthMin << endl;
}

int main() {
    int arr1[] = {16, 16, 16, 16, 16};
    vector<int> vec1(arr1, arr1 + sizeof(arr1) / sizeof(arr1[0]));
    cout << "Test case 1: ";
    findSumAndDifference(vec1, 0, 1);

    int arr2[] = {85, 45, 65, 75, 95};
    vector<int> vec2(arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]));
    cout << "Test case 2: ";
    findSumAndDifference(vec2, 5, 2);

    return 0;
}

