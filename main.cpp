#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Node{
	public:
		int data;
		Node* next;
		
		Node(int data){
			this->data = data;
			this->next = nullptr;
		}
		
};

class LinkedList{
	public:
		Node* start = nullptr;
		
		void insertAtLast(int value){
			Node new_node(value);
			
			if (start==nullptr){
				start = &new_node;
			}
			else{
				Node* temp = this->start;
				while (temp->next != nullptr){
					temp = temp->next;
				}
				temp->next = &new_node;
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
	list.insertAtLast(2);
	list.display();


	return 0;
}