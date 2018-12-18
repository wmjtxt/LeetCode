 ///
 /// @file    :019. Remove Nth Node From End of List.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-18 14:57:21(NewYork time)
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* p1 = head;
        ListNode* p2 = head;
        ListNode* p3 = head;
        int i = 0;
        while(i < n){
            p1 = p1->next;
            i++;
            if(p1 == NULL) break;
        }
        if(i < n)
            return head;
        if(p1 == NULL){
            head = p2->next;
            return head;
        }
        while(p1 != NULL){
            p1 = p1->next;
            p3 = p2;
            p2 = p2->next;
        }
        p3->next = p2->next;
        return head;
    }
};

int main(){
	
	return 0;
}
