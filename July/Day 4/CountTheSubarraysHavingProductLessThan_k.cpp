// https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1
class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int start=0, end=0, count=0;
        long long product=1;
        while(end<n){
            product*=a[end];
            while(start<n && product>=k){
                product=product/a[start];
                start++;
            }
            if(product<k)
                count+= (end-start+1);
            end++;
        }
        return count;
    }
};