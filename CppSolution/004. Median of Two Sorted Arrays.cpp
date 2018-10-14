 ///
 /// @file    :4. Median of Two Sorted Arrays.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-09-09 18:31:05(NewYork time)
 /// @quote   :
 ///
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

/*
	Solution
	Median is the middle number which partitions the sorted array into two halves with same length, even when it comes to two sorted array, the rule will always apply.
	
	Overview of the partition:
	
	  A[i-1]   |   A[i]
	          \|/
	          /|\
	  B[i-1]   |   B[j]
	So in this problem, we are to search out the four border numbers A[i-1] and A[i] in array-1 and B[j-1] and B[j] in array-2 to ensure that:
	
	First, max(A[i-1],B[j-1]) is smaller than or equal to min(A[i],B[j]).
	Second, len(A[0]...A[i-1])+len(B[0]...B[j-1])==len(A[i]...A[n-1])+len(B[j]...B[m-1]), n and m is the size of the array-1 and array-2 respectively.
	Third, to ensure the above two conditions, there must be a equation mid=i+j-1=(m+n-1)/2 and as a result A[i-1] corresponds to B[j] and B[j-1] corresponds to A[i]; so actually we need to search two pairs, which will meet the following requirements: A[i-1]<=B[j] and B[j-1]<=A[i].
	Now let's dive into details of its implementation.
	
	First, get the index of the final median index of the two arrays mid=(m+n-1)/2=i+j-1, in which case if the whole size of the two array is odd, then the median will be max(A[i-1],B[j-1]); if it's even, then the median will be (max(A[i-1],B[j-1])+min(A[i],B[j]))/2.
	Second, do the binary searching based on array-1, starting with l=0, r=n-1 and m1=l+((r-l)>>1); and the corresponding index in array-2 will be m2=mid-m1.
	Third, if A[m1] < B[m2] then we should select the bigger half by l=m1+1 since m1 is too small while we need to find the biggest A[m1] that is smaller than B[m2], which can then ensure us A[m1+1]>B[m2-1]; otherwise select the smaller half by r=m1-1 since it's too big, which can then ensure us A[m1-1]<B[m2+1].
	Forth, after the searching, r == l-1 and as a result l will point to A[i] while r pointing to A[i-1], which means A[i-1], A[i], B[j-1] and B[j] are A[r], A[l], B[mid-l] and B[mid-r] respectively.
	Fifth, in the end, we can retrieve the median as First presents.
 */

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size()) nums1.swap(nums2);
        int size1 = nums1.size(), size2 = nums2.size(), size = size1+size2;
        int mid = (size-1)/2, l = 0, r = size1-1;
        while(l <= r){
            int m1 = l+((r-l)>>1), m2 = mid-m1;
            if(nums1[m1] > nums2[m2]) r = m1-1;
            else l = m1+1;
        }
        int a = max(r>=0? nums1[r]:INT_MIN, mid-l>=0? nums2[mid-l]:INT_MIN);
        if(size&1) return a;
        int b = min(l<size1? nums1[l]:INT_MAX, mid-r<size2? nums2[mid-r]:INT_MAX);
        return (a+b)/2.0;
    }
};


int main(){
	
	return 0;
}
