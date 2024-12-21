#include <iostream>
#include <vector>
#include <algorithm> // For sort

using namespace std;

// Function to perform binary search
int binarySearch(const vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // To avoid overflow
        if (nums[mid] == target) {
            return mid; // Target found
        } else if (nums[mid] < target) {
            left = mid + 1; // Search the right half
        } else {
            right = mid - 1; // Search the left half
        }
    }
    return -1; // Target not found
}

int main() {
    // Test case 1
    int arr1[] = {45, 4, 23, -11, 20, 5, 10, 50};
    vector<int> nums1(arr1, arr1 + sizeof(arr1) / sizeof(arr1[0]));
    int key1 = 5;

    // Sort the array for binary search
    sort(nums1.begin(), nums1.end());
    int index1 = binarySearch(nums1, key1);

    cout << "Input: (45, 4, 23, -11, 20, 5, 10, 50), Key element: 5" << endl;
    if (index1 != -1) {
        cout << "Output: Found in the position " << index1 << endl;
    } else {
        cout << "Output: Not found" << endl;
    }

    // Test case 2
    int arr2[] = {8, -2, 11, 8, 6, 3, 10, 0};
    vector<int> nums2(arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]));
    int key2 = 2;

    // Sort the array for binary search
    sort(nums2.begin(), nums2.end());
    int index2 = binarySearch(nums2, key2);

    cout << "Input: (8, -2, 11, 8, 6, 3, 10, 0), Key element: 2" << endl;
    if (index2 != -1) {
        cout << "Output: Found in the position " << index2 << endl;
    } else {
        cout << "Output: Not found" << endl;
    }

    // Time complexity
    cout << "\nTime Complexity: O(log n) for the binary search, O(n log n) for sorting.\n";
    return 0;
}

