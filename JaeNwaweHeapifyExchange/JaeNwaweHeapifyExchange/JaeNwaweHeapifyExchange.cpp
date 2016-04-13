// JaeNwaweHeapifyExchange.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "Heap.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

	int index;
	int key;
	Heap d(-10, 20), r(15, 15), s(0, 8);
	
	std::vector<Heap> htest;

	cout << "fiveT, a PQ filled with 10 Heap objects.  Within the PQ, each object contains a key and value.  The PQ is represented in a vector. \n";
	Heap fiveT;
	fiveT.dataFill(htest, 5); 
	fiveT.print_heap(htest, "datafill");	
	
	cout << "fiveT, is sorted using the min heap rules, and the PQ is printed below:\n";
	fiveT.build_min_heapify(htest);
	fiveT.print_heap(htest,"build_min_heapify");

	cout << "Test 1 case.\n"<<"The return_min function returns the key and value contents of htest[0] as the data item in the PQ.  The key  is -5 and value in htest[0] is 10. \n";
	Heap min_htest = fiveT.return_min(htest); 
	fiveT.print_heap(htest, "return_min");

	cout << "Test 2 case.\n" << "The extract_min function will remove the object in htest[0]. The object containing key -5  and value 10  will no longer be at the beginning of the priority queue. \n";
	fiveT.heap_extract_min(htest);
	fiveT.print_heap(htest, "heap_extract_min");

	cout << "Test 3 case.\n" << "The insert function places d(-10, 20) is in the PQ. Here, -10 is the lowest key so d will be at the beginning of the PQ as it is swapped to the heap's root. \n";
	fiveT.heap_insert(htest, d);
	fiveT.print_heap(htest, "heap_insert");

	cout << "Test 4 case.\n" << "The extract_min function will remove the object in htest[0]. The object containing key -10  and value 20  will no longer be at the top of the priority queue. \n";
	fiveT.heap_extract_min(htest);
	fiveT.print_heap(htest, "heap_extract_min");

	cout << "Test 5 case.\n" << "The insert function places r(15, 15) in the Heap.  The key 15 is the highest key so the Heap will be at the end of the PQ.  There is no need to swap it in place with other objects in the PQ because it is the largest and it is placed as a child of the parent at the heap's height - 1 level.\n";
	fiveT.heap_insert(htest, r);
	fiveT.print_heap(htest, "heap_insert");

	cout << "Test case 6.\n" << "The decrease_key decreases htest[7]'s key from 4 to 3.  1 which is its value will accompany it as it is heap sorted to a new positon.  In this example, the objects location does not change in the PQ or on the tree because it is not larger than its parent object htest[3]. \n ";
	index = 7;
	key = 3;
	fiveT.heap_decrease_key(htest, index, key);
	fiveT.print_heap(htest, "decrease_key");
	cout << "\n" << "\n";

	cout << "Test 7 case.\n" << "The return_min function returns the key and value contents of htest[0] of the data item in the PQ.  The key is -4 and value in htest[0] is 9. \n";
	fiveT.return_min(htest);
	fiveT.print_heap(htest, "return_min");

	cout << "Test case 8.\n" << "The insert function places s(0, 8) in the Heap at the last position index 10.  It is larger than its parent htest[index/2] which has key 0 and value 5 so there is no swapping.  It is placed as a left child because the PQ inserted it at the end of htest in htest[10] and did not need to swap it with its parent to heapfiy the corresponding tree. \n";
	fiveT.heap_insert(htest, s); 
	fiveT.print_heap(htest, "heap_insert");
	cout << "\n" << "\n";

	cout << "Test case 9.\n" << "The decrease_key decreases htest[0]'s key from -4 to -100 which is the location of the heap's root at htest[0].  It will remain the smallest value in the PQ so the key will become -100 and the value 9 will remain the same. \n ";
	index = 0;
	key = -100;
	fiveT.heap_decrease_key(htest, index, key); 
	fiveT.print_heap(htest, "decrease_key");

	cout << "Test 10 case.\n" << "The return_min function returns the key and value contents of htest[0] as the data item in the PQ.  The key will be -100 and value in htest[0] is 9. \n";
	fiveT.return_min(htest);
	fiveT.print_heap(htest, "return_min");

	cout << "Test case 11.\n" << "The extract_min function will remove the heapified binary tree in htest[0] from the PQ.  It will remove -100 and 9. \n";
	fiveT.heap_extract_min(htest);
	fiveT.print_heap(htest, "extract_min");

	cout << "Test case 12.\n" << "The decrease_key decreases htest[9]'s key to -4. htest[9] previously contained key 15 and value 15.  Afterwards, the key is decreased to -4 which will become the heap's root object at htest[0] .  The PQ will show that htest[0] will contain key -4 and value 15.  Additionally, the tree must be heapified for each child to be smaller than its parent.  Note that the prior root is now a left child at htest[1]. \n";
	index = 9;
	key = -4;
	fiveT.heap_decrease_key(htest, index, key);
	fiveT.print_heap(htest, "decrease_key");

    return 0;
}