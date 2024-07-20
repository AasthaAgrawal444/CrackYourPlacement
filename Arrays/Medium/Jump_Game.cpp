//Dp (REc+ MEMO)

class Solution {
public:

    // REC+MEMO

    // int t[10001];
    // bool solve(vector<int> &nums, int n, int idx){
    //     if(idx==n-1) return true;
    //     if(t[idx] != -1) return t[idx];
    //     for(int i=1; i<=nums[idx]; i++){
    //         if(solve(nums, n, idx+i) == true)
    //         return t[idx] = true;
    //     }
    //     return t[idx] = false;
    // }
    // bool canJump(vector<int>& nums) {
    //    int n=nums.size();
    //    memset(t, -1, sizeof(t));
    //    return solve(nums, n, 0); 
    // }





    // BOTTOM_UP

    //  bool canJump(vector<int>& nums) {
    //     int n = nums.size();
    //     vector<bool> t(n, false);
    //     t[0] = true;
    //     for(int i=1; i<n; i++){
    //         for(int j=i; j>=0; j--){
    //             if(t[j]==true && j+nums[j] >= i){
    //                 t[i]=true;
    //                 break;
    //             }
    //         }
    //     }
    //     return t[n-1];
    // }


    //smart solution - optimal

     bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxReachable=0;
        for(int i=0; i<n; i++){
            if(i>maxReachable) return false;
            maxReachable = max(maxReachable, i+nums[i]);
        }
        return true;
    }
};