class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
       vector<int> indices(names.size());
        iota(indices.begin(), indices.end(), 0); // Fill indices with 0,1,2,...

        sort(indices.begin(), indices.end(), [&](int a, int b) {
            return heights[a] > heights[b];
        });

        vector<string> result;
        for (int i : indices) result.push_back(names[i]);
        return result; 
    }
};