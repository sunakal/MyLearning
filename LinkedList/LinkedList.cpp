#include <iostream>
using namespace std;

class LNode
{
  int data;
  LNode* next;
  public:
  LNode()
	{
	  data =-1;
	  next = nullptr;
	}
	LNode(int val)
	{
	  data = val;
	   next = nullptr;
	}
 ~LNode()
	{
	 delete next;
	}
 friend class LList ;
};

class LList
{
  LNode *head;
  LNode *tail;
  int LCount;
  public:
   LList()
	{
	 head = nullptr;
	 tail = nullptr;
	}
  ~LList()
	{
	delete head;
	delete tail;
	}
	
  void addNode(int val)
	{
	   if(head == nullptr)
        	{
  			head = new LNode(val);
			tail = head;
		}
	  else
	 {
	   LNode *tmp = new LNode(val);
 	   tail->next = tmp;
	   tail = tmp;
	 }
 		LCount++;

	}
  void printList()
  {

   cout<<"---------   LList data -----------"<<endl;
   LNode *current = head;
   while(current != nullptr)
{
     cout<<current->data<<endl;	 
     current= current->next;
}
 }

friend ostream& operator<<(ostream& out,LList *list)
 {
/*
   cout<<"---------   LList data -----------"<<endl;
   LNode *current = list->head;
   while(current != nullptr)
     out<<current->data<<endl;	
*/
   return out;
 }

void doMergeSort()
{
  mergeSort(&head);
}
void mergeSort(LNode **node)
{
  
 if(*node == nullptr || (*node)->next == nullptr)
   return;
  LNode *a = *node;
  LNode *b = (*node)->next;
 splitList(*node,a,b);
 mergeSort(a);
 mergeSort(b);
 *node = mergeList(a,b);
}
LNode* mergeList(LNode *left,LNode *right)
{
  LNode *result = nullptr;
   if(left == nullptr)
     return right;
   if(right == nullptr)
     return left;
   
  if(left->data <= right->data)
    {
      result = left;
      result->next = mergeList(left->next,right);
    }
  else
  {
     result = right;
     result->next = mergeList(left,right->next);
  }
  return result;
  
} 
void splitList(LNode *node,LNode *slow,LNode *fast)
{
   if(slow == nullptr)
      return ;
   
   while(fast != nullptr)
	{
	fast=fast->next;
         if(fast != nullptr)
           slow = slow->next;
	   fast = fast->next;
	}

}

};


int main()
{
  LList *myList = new LList;
  myList->addNode(10);
  myList->addNode(3);
  myList->addNode(27);
  myList->addNode(15);
  myList->addNode(8);
  myList->printList();
   myList->doMergeSort();
  cout<<"----------After Merge--------------"<<endl;
 myList->printList();
 return 0;
}


