class Solution {
public:
    int maxSatisfied(vector<int>& c, vector<int>& g, int k) {
        int n=c.size();
        int m=g.size();
       int sum0=0;
       for(int i=0;i<n;i++){
        if(g[i]==0){
            sum0+=c[i];
        }

       }

       int sum1=0;
       int l=0;
       int maxsum1=0;
       for(int r=0;r<n;r++){
        if(g[r]==1){
           sum1+=c[r];
        }
        
        while(r-l+1>k){
            if(g[l]==1){
                sum1-=c[l];
            }
            l++;
        }
        maxsum1=max(maxsum1,sum1);


       }
       return maxsum1+sum0;
        
    }
};