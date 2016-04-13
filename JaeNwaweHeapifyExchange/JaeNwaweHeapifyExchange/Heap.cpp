#include "stdafx.h"
#include "Heap.h"
#include <iostream>
#include <string>


Heap::Heap(int key_, int value_)
{
	//constructor
	//initialize class variables;
	key = key_;
	value = value_;
}


void Heap::dataFill(std::vector<Heap>  & htest, int _quanitity)

{
	int start = -1 * _quanitity;
	int end = _quanitity;
	Heap _temp;


	for (int i = start; i < end; i++)
	{
		_temp.key = i;
		_temp.value = _quanitity - i; 
		htest.push_back(_temp);
		 }

}


Heap::Heap()
{
	
	//initialize class variables;
	key = 0;
	value = 0;
}


Heap::~Heap()
{

//find what to delete for destructor
}


void Heap::heapify(std::vector<Heap>  & htest, int i)
	{
	int min;
	Heap temp;
	min = i;
	//i was set to 1 for this example;

	int left = 2 * i + 1;
	int right = 2 * i + 2;


	if ((left <htest.size()) && (htest[min].key > htest[left].key)) min = left;
	if ((right <htest.size()) && (htest[min].key > htest[right].key)) min = right;
	if (min != i)
		{
		//swap
		temp = htest[min];
		htest[min] = htest[i];
		htest[i] = temp;

		//call heapify to repeat
		heapify(htest, min);
		}
	}


void Heap::print_heap(std::vector<Heap>  & htest, std::string function_name)
{
	int _min;
	std::cout << "\n";
	std::cout << "The contents of heap after ";
	std::cout << function_name << " are:";
	std::cout << "\n" << "index\t" << "key\t" << "value\n";
	
	for (int j = 0; j < htest.size(); j++)
	{
		std::cout << j;
		std::cout << '\t' << htest[j].key;
		std::cout << '\t' << htest[j].value;
		std::cout << '\n';
		
	}
	system("pause");
	std::cout << "\n" << "\n";
	

}

	void Heap::build_min_heapify(std::vector<Heap>  & h)
	{
		for (int i = h.size()/2; i >= 0; i--)
			heapify(h,i);
	}
	
	Heap Heap::heap_extract_min(std::vector<Heap>  & h)
	{
		int _min = 0 ;	
		int _last = h.size() - 1;
		
		Heap _temp = h[_min];
		h[_min] = h[_last];
		h.erase(h.end() - 1);
		heapify(h, _min);
		//build_min_heapify(h);

		std::cout << "The min key for the heap_extract function is " << _temp.key << ".\n";
		std::cout << "The min value for the heap_extract function is " << _temp.value <<".\n";
		return _temp; //return min which is 0 or h[_min] of type Heap but stores the key and value;
	}

	Heap Heap::return_min(std::vector<Heap>  & h)
	{
		int _min = 0;
		std::cout << "The vector's min key is " << h[_min].key << ".\n";
		std::cout << "The vector's min value is " << h[_min].value << ".\n";
		return h[_min];
	}


	void Heap::heap_insert(std::vector<Heap>  & h, Heap d)
{
	Heap _d = d;
	_d.key = 32767-1;
	int _last = h.size(); //e.g. 5  
	h.push_back(_d);
	heap_decrease_key(h, _last, d.key);
	}

	void Heap::heap_decrease_key(std::vector<Heap>  & h, int _index, int _key)
	{
		int _parent = _index / 2;

		Heap _temp;

		if (_key > h[_index].key) {
			std::cout << "error new key is bigger than current key";
			return;
		}
		h[_index].key = _key;

		while (_index > 0 && (h[_parent].key > h[_index].key))
		{
			_temp = h[_parent];
			h[_parent] = h[_index];
			h[_index] = _temp;
			_index = _index / 2;
			_parent = _index /2 ;

		}
	}
