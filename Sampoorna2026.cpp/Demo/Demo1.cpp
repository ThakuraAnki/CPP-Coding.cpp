class Solution {
public:




    //if NSE doesnt exist to the right take it as index N
    //sly for left take it as -1 


vector<int>nsel(vector<int>A){
    stack<int>s;
    int n=A.size();
    vector<int>nsel;
    for(int i=0;i<n;i++){//change 1 

        //find the NGE to the left

        while(!s.empty()  && A[s.top()]>=A[i]){
            //s.top() cannot be the nse to the left  so we can pop
            s.pop(); 
        }

        // now 2 cases after this loop 
        if(s.empty()){
            nsel.push_back(-1);
        }
        else{
            nsel.push_back(s.top());
            
        }
        //now weve found the answer for arr[i] ,but before moving to the left push 
        //it in the stack as it can be valid candidate for other elements 
        s.push(i);
    }

    return nsel;
    
    
}


vector<int>nser(vector<int>A){
    stack<int>s;//tracks indices 
    int n=A.size();
    vector<int>nser;
    for(int i=n-1;i>=0;i--){

        //find the NGE to the right 

        while(!s.empty()  && A[s.top()]>=A[i]){
            //s.top() cannot be the NSE to the right so we can pop
            s.pop(); 
        }

        // now 2 cases after this loop 
        if(s.empty()){
            nser.push_back(n);
        }

        else{
            nser.push_back(s.top());
        }
        //now weve found the answer for arr[i] ,but before moving to the left push 
        //it in the stack as it can be valid candidate for other elements 
        s.push(i);
    }
    reverse(nser.begin(),nser.end());
    return nser;
}


int largestRectangleArea(vector<int>& heights) {
        //basically height and width are candidates so we fix height and try to find the best width .then we maximise the area 
        
        int ans=0;
        //PRECOMPUTATION

        vector<int>NSELIDX=nsel(heights);
        vector<int>NSERIDX=nser(heights);

        for(int i=0;i<heights.size();i++){
            //we need to tell this in constant time for O(n) soln 
            //and that is NSE to the left and right 

            int bestwidth=NSERIDX[i]-NSELIDX[i]-1;
            //basically if j is nsel and k is nser then (j+1)....(k-1) is the answer
            int bestarea=bestwidth*heights[i];
            ans=max(ans,bestarea);
        }

        return ans;
        
    }
};