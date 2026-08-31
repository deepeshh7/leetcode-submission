class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        // Store: {distance, point}
        vector<pair<int, vector<int>>> arr;

        // Calculate distance of every point
        for (auto point : points) {

            int x = point[0];
            int y = point[1];

            int distance = x * x + y * y;

            arr.push_back({distance, point});
        }

        // Sort based on distance
        sort(arr.begin(), arr.end());

        // Store first k points
        vector<vector<int>> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(arr[i].second);
        }

        return ans;
    }
};