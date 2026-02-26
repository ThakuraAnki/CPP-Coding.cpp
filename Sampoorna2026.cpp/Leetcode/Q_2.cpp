class Solution {
public:
    int maxSubarraySumCircular(vector<int>& arr) {
        int curMax=0;
    int curMin=0;
    int Maxsum=arr[0];
    int Minsum=arr[0];
    int TSum=0;

    for(int x:arr){
        curMax=max(curMax,0)+x;
        Maxsum=max(Maxsum,curMax);

        curMin=min(curMin,0)+x;
        Minsum=min(Minsum,curMin);
        TSum+=x;
    }
    if(TSum==Minsum){
        return Maxsum;
    }else{
        return max(Maxsum,TSum-Minsum);
    }
    }
};