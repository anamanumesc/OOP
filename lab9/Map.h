#pragma once
#include <iostream>


template <typename K, typename V>  //aici pot avea orice doua vaori conectate ca si map
class Map{

private:
	struct KV {
		
		K key;
		V value;
		int index;	
	};

	KV* pair; //vector with multiple structs KV
	int capacity;
	int current_index; 

	//void Set(int arg1, const char* arg2);

public:
	const KV* begin() { return &pair[0]; };
	const KV* end() { return &pair[current_index]; };

	const char*& operator[](K key) {
	
		//it is gonna return a const char pointer.. a reference to it
	//and then the = is gonna return 


		for (int i = 0; i < current_index; i++) {

			if (pair[i].key == key) { //daca gasim un struct care are aceeasi cheie

				return pair[i].value; //returnam o referinta catre locul de la mine din valoare
			}

		}

		current_index++; //marim indexul cu 1

		pair[current_index - 1].index = current_index - 1;

		pair[current_index - 1].key = key;

		return pair[current_index - 1].value;

	}

	void print_info() {


		for (int j = 0; j < current_index; j++) {

			std::cout << "indexul e: " << pair[j].index << "\n";
			std::cout << "cheia e: " << pair[j].key << "\n";
			std::cout << "stringul e: " << pair[j].value << "\n \n";
		}
	}
	//constructor
	Map() { pair = new KV[10];  capacity = 10;  current_index = 0; } //we add memory to  pair
	//destructor
	~Map() { delete[] pair;  capacity = 0;  current_index = 0; }
	
	int Count() { return this->current_index;};

	void Clear() {
	
		for (int i = 0; i < current_index; i++) {

			pair[i].index = NULL;
			pair[i].value = NULL;
			pair[i].key = NULL;
		}
		this->capacity = 0;
		this->current_index = 0;
		delete[] pair;	
	}

	bool Delete(const K& key) {
	
	
		for (int i = 0; i < current_index; i++) {

			if (pair[i].key == key) { //daca gasim un struct care are aceeasi cheie

				for (int j = i; j < current_index; j++) {

					pair[j].key = pair[j + 1].key;
					pair[j].value = pair[j + 1].value;
					pair[j].index = pair[j + 1].index;

				}
				--current_index;
			}
		}

		return false;

	
	}

	bool Includes(const Map mappy) {
	
	
		if (mappy.current_index > this->current_index) return false;

		for (int i = 0; i < current_index; i++) {

			if ((this->pair[i].key != mappy.pair[i].key) || (this->pair[i].value != mappy.pair[i].value)) return false;

		}
		return true;	
	}

	bool Get(const K key, V value) {
	
		for (int i = 0; i < current_index; i++) {

			if (pair[i].key == key) {
				//if we found one key coresponding to ours

				value = pair[i].value;
				return true;
			}

		}

		return false;
	
	}

};

