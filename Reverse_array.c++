
#include <iostream>
#include <vector>

using namespace std;

void reversing_Array(vector<int>& nums, int i); 

int main() {
    vector<int> nums = {10, 20, 40, 50};
    reversing_Array(nums, nums.size() - 1);  
    return 0;
}

void reversing_Array(vector<int>& nums, int i) {
    for (int j = i; j >= 0; j--) {  
        cout << nums[j] << " ";
    }
    cout << endl;
}
