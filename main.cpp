#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Node{
	public:
		int data;
		int* next;
		
		Node(int data){
			this->data = data;
			this->next = nullptr;
		}
		
};

class LinkedList{
	public:
		int* start = nullptr;
		
		void insertAtLast(int value){
			Node new_node(value);
			
			if (start==nullptr){
				start = &new_node;
			}
		}
};

int main(int argc, char** argv) {
	int num = 5;
	Node myobj(3,num);

	return 0;
}