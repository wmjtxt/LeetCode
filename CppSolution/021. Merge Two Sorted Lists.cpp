 ///
 /// @file    :021. Merge Two Sorted Lists.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-19 10:16:21(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        ListNode* r = NULL;
        if(l1->val <= l2->val){
            r = l1;
            l1 = l1->next;
        }
        else{
            r = l2;
            l2 = l2->next;
        }
        ListNode* cur = r;
        while(l1 != NULL && l2 != NULL){
            if(l1->val <= l2->val){
                cur->next = l1;
                l1 = l1->next;
            }
            else{
                cur->next = l2;
                l2 = l2->next;
            }
            cur = cur->next;
        }
        if(l1 != NULL) cur->next = l1;
        if(l2 != NULL) cur->next = l2;
        return r;
    }
};

int main(){
	
	return 0;
}
