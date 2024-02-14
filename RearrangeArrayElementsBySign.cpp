class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int> positive;
        queue<int> negative;
        int size = nums.size();

        for(int x : nums){
            if(x > 0){
                positive.push(x);
            }
            else{
                negative.push(x);
            }
        }

        for(int i = 0; i < size; i++){
            if(i % 2 == 0){
                nums[i] = positive.front();
                positive.pop();
            }
            else {
                nums[i] = negative.front();
                negative.pop();
            }
        }

        return nums;
    }
};
