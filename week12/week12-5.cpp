///week12-6.cpp
///LeetCode 1920. Build Array from Permutation
///��for�j���}�Cans[i] = nums[nums[i]]
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int N = nums.size();///�}�C���j�p
        vector<int> ans (N);///ans���j�p,�ON�p�߬O��A�� C++���}�C
        for (int i=0; i<N; i++){
            ans[i] = nums[nums[i]];/// �D�حn�A���o��
        }
        return ans;
    }
};
