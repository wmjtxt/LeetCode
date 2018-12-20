 ///
 /// @file    :025. Reverse Nodes in k-Group.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-12-20 16:14:35(NewYork time)
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *cur, *tail, *p, *p1, *p2;
        cur = tail = p = p1 = p2 = head;
        while(cur){
            int i = 0;
            while(p && i < k){
                tail = p;
                p = p->next;
                i++;
            }
            if(i < k) break;
            ListNode * tmp = cur;
            p2 = p1;
            p1 = cur;
            while(cur != tail){
                tmp = tmp->next;
                cur->next = tail->next;
                tail->next = cur;
                cur = tmp;
            }
            if(p1 == head) head = cur;
            else p2->next = cur;
            cur = p;
        }
        return head;
    }
};

int main(){
	
	return 0;
}
