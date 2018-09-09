///
 /// @file    :2. Add Two Numbers.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-08-21 21:24:25(NewYork time)
 /// @quote   :
 ///

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution{
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
		int flag = 0;
		int temp = l1->val + l2->val + flag;
		if(temp > 9){
			temp = temp % 10;
			flag = 1;
		}
		else {
			flag = 0;
		}
		ListNode* res = new ListNode(temp);
		ListNode* p = res;
		l1 = l1->next;
		l2 = l2->next;
		while(l1 != NULL && l2 != NULL){
			int temp = l1->val + l2->val + flag;
			if(temp > 9){
				temp = temp % 10;
				flag = 1;
			}
			else{
				flag = 0;
			}
			p->next = new ListNode(temp);
			p = p->next;
			l1 = l1->next;
			l2 = l2->next;
		}
		while(l1 != NULL){
			if(l1->val + flag == 10){
				p->next = new ListNode(0);
				flag = 1;
			}
			else{
				p->next = new ListNode(l1->val + flag);
				flag = 0;
			}
			p = p->next;
			l1 = l1->next;
		}
		while(l2 != NULL){
			if(l2->val + flag == 10){
				p->next = new ListNode(0);
				flag = 1;
			}
			else{
				p->next = new ListNode(l2->val + flag);
				flag = 0;
			}
			p = p->next;
			l2 = l2->next;
		}
		if(flag == 1){
			p->next = new ListNode(1);
		}
		return res;
	}
};

int main(){
	
	return 0;
}
