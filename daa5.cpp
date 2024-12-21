#include <iostream>
#include <vector>
using namespace std;

// Function to find subsets with the given sum
void findSubsets(vector<int>& set, vector<int>& subset, int index, int targetSum, int currentSum) {
    if (currentSum == targetSum) {
        cout << "Subset is (";
        for (size_t i = 0; i < subset.size(); i++) {
            cout << subset[i] << (i < subset.size() - 1 ? ", " : "");
        }
        cout << ")" << endl;
        return;
    }

    if (index == set.size() || currentSum > targetSum) return;

    subset.push_back(set[index]);
    findSubsets(set, subset, index + 1, targetSum, currentSum + set[index]);

    subset.pop_back();
    findSubsets(set, subset, index + 1, targetSum, currentSum);
}

int main() {
    int set1Arr[] = {6, 2, 8, 1, 5};
    vector<int> set1(set1Arr, set1Arr + sizeof(set1Arr) / sizeof(set1Arr[0]));
    int sum1 = 9;

    int set2Arr[] = {6, -4, 7, -1, 5, 2, 8, 1};
    vector<int> set2(set2Arr, set2Arr + sizeof(set2Arr) / sizeof(set2Arr[0]));
    int sum2 = 10;

    cout << "Input: Set (6, 2, 8, 1, 5), Sum = 9\nOutput:\n";
    vector<int> subset1;
    findSubsets(set1, subset1, 0, sum1, 0);

    cout << "\nInput: Set (6, -4, 7, -1, 5, 2, 8, 1), Sum = 10\nOutput:\n";
    vector<int> subset2;
    findSubsets(set2, subset2, 0, sum2, 0);

    return 0;
}

