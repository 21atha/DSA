#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result = nums; // Create a copy of nums
        result.insert(result.end(), nums.begin(), nums.end()); // Append nums again
        return result;
    }
};
