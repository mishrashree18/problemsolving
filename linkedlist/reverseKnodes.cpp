// 1->2->3->4->5->6
// 2->1->4->3->6->5    after reversal


#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
	Node(int data)
	{
		this->data = data;
		next = NULL;
	}
};

struct LinkedList {
	Node* head;
	LinkedList() { head = NULL; }

	
	Node* reversek(Node* &head, int k)
	{
		
		Node* current = head;
		Node *prev = NULL, *next = NULL;
        int count=0;
		while (current != NULL && count<k) {
			
			next = current->next;
			
			current->next = prev;
			
			prev = current;
			current = next;
            count++;
		}
        if(next!=NULL){
            head->next = reversek(next,k);
        }
        return prev;
		
	}

	
	void print()
	{
		struct Node* temp = head;
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
	}

	void push(int data)
	{
		Node* temp = new Node(data);
		temp->next = head;
		head = temp;
	}
};


int main()
{
	
	LinkedList ll;
	ll.push(20);
	ll.push(4);
	ll.push(15);
	ll.push(85);

	
	ll.print();
    cout<<endl;

    int k=2;

	ll.head = ll.reversek(ll.head,k);

	
	ll.print();
	return 0;
}
