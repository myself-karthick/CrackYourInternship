// https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(), a.end());
        long long start=0, end=m-1, minDiff=INT_MAX;
        while(start<n && end<n){
            minDiff=min(minDiff, (a[end]-a[start]));
            start++;
            end++;
        }
        return minDiff;
    }   
};