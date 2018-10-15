 ///
 /// @file    :876. Middle of the Linked List.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-08 17:00:11(NewYork time)
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
    ListNode* middleNode(ListNode* head) {
        ListNode *p1, *p2;
		p1=p2=head;
		while(p1->next != NULL && p2->next != NULL){
			p1 = p1->next;
			p2 = p2->next;
			if(p2->next != NULL)
				p2 = p2->next;
			else
				break;
		}
		return p1;
    }
};

int main(){
	
	return 0;
}
