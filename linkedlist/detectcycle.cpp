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

	bool hasCycle(Node* &head){
        Node* slow=head;
        Node* fast=head;

        while(fast!=NULL || fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
       
        if(fast==slow){
            return true;
        }
    }
        return false;
    }

    // floyd's algorithm

    void removeCycle(Node* &head){
        Node* slow=head;
        Node* fast=head;

        do{
            slow=slow->next;
            fast=fast->next->next;
        } while(slow!=fast);
        fast=head;

        while(slow->next!=fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=NULL;
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

   

	
	ll.print();
	return 0;
}
