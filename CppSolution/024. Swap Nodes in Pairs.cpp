 ///
 /// @file    :024. Swap Nodes in Pairs.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-20 15:39:13(NewYork time)
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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* p1 = head;
        ListNode* p2 = head;
        ListNode* p3 = head;
        p1 = p1->next;

        p2->next = p1->next;
        p1->next = p2;
        head = p1;
        p3 = p2;
        if(p2) p2 = p2->next;
        if(p2) p1 = p2->next;
        while(p1 && p2){
            p2->next = p1->next;
            p1->next = p2;
            p3->next = p1;
            p3 = p2;
            if(p2) p2 = p2->next;
            if(p2) p1 = p2->next;
        }
        return head;
    }
};

int main(){
	
	return 0;
}
