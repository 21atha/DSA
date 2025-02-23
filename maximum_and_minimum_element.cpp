#include <iostream>
#include <vector>
#include <algorithm>  // For minmax_element

using namespace std;

void max_min(const vector<int>& nums) {
    if (nums.empty()) {
        cout << "Array is empty." << endl;
        return;
    }

    auto [minIt, maxIt] = minmax_element(nums.begin(), nums.end());

    cout << "Maximum: " << *maxIt << endl;
    cout << "Minimum: " << *minIt << endl;
}

int main() {
    vector<int> nums = {10, 20, 40, 5, 50};  // Sample input
    max_min(nums);
    return 0;
}
