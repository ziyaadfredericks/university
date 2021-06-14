#include <iostream>

using namespace std;

struct node {
	int value;
	node *next;
};

void makePtr(node &ptr, int value) {
	node newPtr{};
	newPtr.value = value + 1;
	newPtr.next = nullptr;
	ptr.next = &newPtr;
}

int main() {
	node n1{}, n2{}, n3{};
	node *head = &n1;

	n1.value = 1;
	n2.value = 2;
	n3.value = 3;

	n1.next = &n2;
	n2.next = &n3;
	n3.next = nullptr;

	node *ptr = &n3;
	for (int i = 0; i < 10; i++) {
		node newNode{};
		newNode.value = i + 4;
		newNode.next = nullptr;
		ptr->next = &newNode;
		ptr = ptr->next;
	}

	node *current = head;
	while (current != nullptr) {
		cout << current->value << endl;
		current = current->next;
	}

	return 0;
}