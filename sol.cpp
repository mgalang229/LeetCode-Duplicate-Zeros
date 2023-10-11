class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> vec;
        int cnt = 0, n = arr.size();
        for (int i = 0; i < n; i++) {
            vec.push_back(arr[i]);
            cnt++;
            if (cnt == n) {
                break;
            }
            if (arr[i] == 0) {
                vec.push_back(0);
                cnt++;
                if (cnt == n) {
                    break;
                }
            }
        }
        arr = vec;
    }
};
