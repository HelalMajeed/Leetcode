class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
       vector<vector<int>> a(2);
       map<int, int> v1;
       for (int i = 0; i < nums1.size(); i++) {
           bool yes = true;
           for (int j = 0; j < nums2.size(); j++) {
               if (nums1[i] == nums2[j]) {
                   yes = false;
               }
           }
           if (yes) {
            if (!v1[nums1[i]]) {
                a[0].push_back(nums1[i]);
                v1[nums1[i]]++;
            }
           }
       }
       map<int, int> v2;
       for (int i = 0; i < nums2.size(); i++) {
           bool yes = true;
           for (int j = 0; j < nums1.size(); j++) {
               if (nums2[i] == nums1[j]) {
                   yes = false;
               }
           }
           if (yes) {
            if (!v2[nums2[i]]) {
                a[1].push_back(nums2[i]);
                v2[nums2[i]]++;
            }
           }
       }
       return a;
    }
};
