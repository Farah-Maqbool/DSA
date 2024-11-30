#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Node{
	public:
		int data;
		Node* next;
		
		Node(int val){
			this->data = val;
			this->next = nullptr;
		}
		
};

class LinkedList{
	public:
		Node* start = nullptr;
		
		void insertAtLast(int value){
			Node* new_node = new Node(value);
			
			if (start==nullptr){
				start = new_node;
				
			}
			else{
				Node* temp = this->start;
				
				while (temp->next != nullptr){	
					temp = temp->next;
				} 
				temp->next = new_node;
			}
		}
		
		void insertAtStart(int value){
			Node* new_node = new Node(value);
			if (start==nullptr){
				start = new_node;	
			}
			else{
				new_node->next = start;
				start = new_node;
				
			}
		}
		
		void insertBetween(int value, int whichValue){
			Node* new_node = new Node(value);
			if (start==nullptr){
				start = new_node;	
			}
			else{
				Node* temp = this->start;
				while (temp->next != nullptr){
					if (temp->data == whichValue){
						new_node->next = temp->next;
						temp->next = new_node;
					}
					temp = temp->next;
				}
			}
		}
		
		void display(){
			Node* temp = this->start;
			cout << temp->data << endl;
			while (temp->next != nullptr){
				temp = temp->next;
				cout << temp->data << endl;
			}
			
		}
		
};

int main(int argc, char** argv) {
	LinkedList list;
	list.insertAtLast(4);
	list.insertAtLast(3);
	list.insertAtLast(6);
	list.insertAtLast(1);
	list.insertAtLast(2);
	list.insertBetween(5,6);
	list.insertAtStart(0);
	list.display();
	
	return 0;
}