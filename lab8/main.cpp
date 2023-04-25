#include <string>
#include <fstream>
#include <iostream>
#include <map>
#include <queue>
using namespace std;

bool is_letter(char);

class my_compare {
public:

	bool operator() (pair<string, int> p1, pair<string, int> p2) {


		if (p1.second < p2.second) { 
			return true;
		}
		else if (p1.second > p2.second) {
			return false;
		}
		else { 
			return p1.first > p2.first;
		
			
		}

	}

};
int main() {


	//to do
	
	//citeste stringul din fisier

	std::string my_str;
	std::ifstream my_file("Text.txt");

	if (!my_file) {
	
		printf("eroare la deshidere :( \n");
		return 0;
	
	}

	if (!getline(my_file, my_str)) { //getline pune din sursa in destinatie
	
		printf("eroare la citirea primei linii! :( \n");
	}

	printf("Sirul de caractere citit este: %s\n", my_str.c_str()); //c_str returneaza const char*

	//to do
	//pune elementele intr-un map in functie de... cate aparitii are

	std::map<std::string, int> my_map; //map care contine string si int fiind nr de aparitii

	//iteratorul
	std::string::iterator string_itr;
	

	for (int i = 0; i < my_str.size(); i++) {
	
		//now we look for a non character and we replace it with \0
		if (!is_letter(my_str[i])) {

			my_str[i] = NULL;
		}

	}

	int i = 0;
	int first = 0;
	int last = 0;
	string temp;

	while( i < my_str.size()){

		if (is_letter(my_str[i])) {
			first = i;

			while (i < my_str.size() && is_letter(my_str[i])) {

				i++;
			}
			temp = my_str.substr(first, i - first ); //index of first - index of last

			for (char& c : temp) {
				c = std::tolower(c);
			}


			if (my_map.count(temp) == 0) { //daca e prima data cand il gasim

				my_map[temp] = 1; 
				
			}
			else if (my_map.count(temp) != 0) { //daca NU e prima data cand il gasim
		
				my_map[temp]++;
			}
			//cout <<"aici e: " << my_map[temp] << endl;

		}
		else i++; 

	}

	//acum am o mapa buna, urmeaza sa pun aceasta mapa intr-o lista sortata crescator
	//Use a std::priority_queue to sort each word using the number of times it was found. if two words have the same number of appearance in the phrase, they will be sorted
    //lexicographically


	priority_queue<pair<string, int>, vector<pair<string, int>>, my_compare> myQueue;

	for (auto mapIterator = my_map.begin(); mapIterator != my_map.end(); mapIterator++) {
		myQueue.push(pair<string, int>(mapIterator->first, mapIterator->second));
	}

	while (!myQueue.empty())
	{
	
		printf("%s => %d\n", myQueue.top().first.c_str(), myQueue.top().second);
		myQueue.pop();
	}

	return 0;
}



bool is_letter(char c) {

	int b = c;

	if (b >= 65 && b <= 90 || b >= 97 && b <= 122) {
		return true;

	}
	else return false;


}