#pragma once
#include <vector>;

class Heap
{
public:
	int key;  //class variables to pass in and out methods in the Heap instance
	int value;

	Heap(int key_, int value_);
	Heap();
	~Heap();

	void heapify(std::vector<Heap>  & h, int i);
	void print_heap(std::vector<Heap>  & htest, std::string function_name);
	
	void heap_decrease_key(std::vector<Heap>  & h, int _index, int _key);
	void build_min_heapify(std::vector<Heap>  & h);
	void heap_insert(std::vector<Heap>  & h, Heap d);
	Heap heap_extract_min(std::vector<Heap>  & h);
	Heap return_min(std::vector<Heap>  & h);


	void dataFill(std::vector<Heap>  & htest, int _quanitity);

private:

};

