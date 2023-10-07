#include <iostream>
#include <vector>

std::vector<int> findSubarraySum(int arr[], int N, int S) {
    std::vector<int> result;
    int left = 0;
    int right = 0;
    int currentSum = 0;

    while (right < N) {
        currentSum += arr[right];

        while (currentSum > S) {
            currentSum -= arr[left];
            left++;
        }

        if (currentSum == S) {
            result.push_back(left + 1); // Adjust for 1-based indexing
            result.push_back(right + 1); // Adjust for 1-based indexing
            return result;
        }

        right++;
    }

    result.push_back(-1); // If no subarray is found
    return result;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int N = sizeof(arr) / sizeof(arr[0]);
    int S = 15;

    std::vector<int> result = findSubarraySum(arr, N, S);

    if (result[0] == -1) {
        std::cout << "No subarray found with sum " << S << std::endl;
    } else {
        std::cout << "Subarray found from index " << result[0] << " to " << result[1] << std::endl;
    }

    return 0;
}
