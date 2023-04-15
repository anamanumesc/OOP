#pragma once

template<typename Data_t>
class Node {

private:
	Data_t value;
	Node** children;
	int size;
	int capacity;
public:

	
	Node* add_node(Node* parent, Data_t data);
	Node* get_node(Node* parent, Data_t);
	void delete_node(Node* n);
	template<typename F>
	Node* find(F&& cmp) const;
	Node* insert(Node* parent, int index);
	template<typename F>
	void sort(F&& cmp);
	int count(Node* parent) const;
};
	//~Node() {delete_node(nullptr);}





