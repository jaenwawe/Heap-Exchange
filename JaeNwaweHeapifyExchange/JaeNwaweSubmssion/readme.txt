========================================================================
    CONSOLE APPLICATION : JaeNwaweHeapifyExchange Project Over0
========================================================================

Jae Nwawe 3/7/2016
HeapSort Min 

This ReadMe.txt file contains a summary of what you will find in each of the required HeapSort functions as 
required in the Supp-Excersize.pdf for HW2 Priority Queues.  

========================================================================
    Terms
========================================================================
In this readme.txt the term:
"Heap" will refer to this binary tree which is full unless there are lowest level children that do not exist.
"Min. Heap" is a heap where the root is the minum value in the corresponding priority queue which will be stored in  a vector in this project.
"Leaf" or "leaves" will refer to the lowest level children that in the Heap's binary tree.
"Root" or "Tree root" refers to the first entry in the priority queue which will be the 0 index of the vector in this project. 
	For example, the root of a Min. Heap would correspond to vector[0] which is explained below.


HeapSort is an in place sorting sort and its running time is O(n log n).  HeapSort uses binary trees to store 
and organize the values inside a vector to create a priority queue.  Minimum HeapSort sorts the tree by swapping any 
children nodes that are greater than their parent with their parent.  

a Min. heap represented as a linear data structure.  Heaps will be represented with vectors or arrays.  The vector (vector) will have entries 
that correspond to the Heap that starts with indice 0 from v[0] to v[HeapSize - 1 ].  
So if the heap has 2 entries, then the vector contain vector[0] as the Heap's first entry, and vector[1] = Heap's second entry.  
*Please note that HeapSize - 1 = 1 in this example.



JaeNwaweHeapifyExchange is a C++ project main function that calls a public class named Heap to create a minimum priority queue that is created with a vector.
The vector includes a series of Heap object data types.  The Heap object data type has an integer key and an integer value.  

The Heap class contains the following methods which are required for the assignment.

1. 	void heap_insert(std::vector<Heap>  & h, Heap d);
	The heap_insert places a three different heaps at the beginning and end of the Priority Queue (PQ).  It obtains the size of the vector, and add the new Heap to the vector at the end.  


2.  Heap return_min(std::vector<Heap>  & h);
	This method returns the heap values in the priority queues first index which is always at vector[0] for this project.



3.  void heap_decrease_key(std::vector<Heap>  & h, int _index, int _key);
	heap_decrease_key assist in maintaining a priority queue in a vector because the data entries can be relocated to different indexes.

4.  Heap heap_extract_min(std::vector<Heap>  & h);  
    heap_extract_min allows HeapSort to maintain a priority queue after removing the root its binary tree.
	
	This method returns the vector's first entry. This method differs from return_min because it actually removes the minimum value from the PQ/vector.  
It does the following:
	The P/Q vector stores index 0 in a value called _temp, swaps the vector's last value which is the size of the vector - 1) with the first position before it goes on to erase the last value, 
	and reheapify the tree to ensure that each node is less than the value of its parent node.  Again, the parent node is the value in the vector where the index is half of the child's index.  
	For example, the integer index of a v[3] is v[1] and the integer index of a child v[4] is
	vector[2] because the integer value of 4/2 is 2, and the integer value of 3/2 is 1.  Vector index values are integers.
		
	CLRS explains a min-heap property by saying "the min-heap property is that for every node i other than the root, A[Parent(i)<=A[[i].  The smallest element in a min-heap is at the root."  
	

5.	void heapify(std::vector<Heap>  & h, int i);
	Heapify method accepts a vector and a location called i.  Also, it ensures that the key at location i is smaller than its  both of its children's keys.
	This is why it compares the min index to the index at 2i+1 which is its left child and 2i +2 which is the index of its right child.
	If the left or right child's key is smaller than i's key, then the key's are swapped and heapify is recalled with the swapped child's index to restart the heapify algorithm and heapify the subtree,
	but using that node as the root of a subtree.

6. 	void print_heap(std::vector<Heap>  & htest, std::string function_name);
	This method prints the current PQ.
	
	
7.	void build_min_heapify(std::vector<Heap>  & h);
	This method sequentially heapifies a vectors.
		
8.	void dataFill(std::vector<Heap>  & htest, int _quanitity);
	This method accepts an integer the vector of type heap with sequential integers and values for test data. 
	
	Test cases are descripted in the program as output to the user.




/////////////////////////////////////////////////////////////////////////////////////////////////////////
Submitted Files
/////////////////////////////////////////////////////////////////////////////////////////////////////////
JaeNwaweHeapifyExchange.cpp 						This is the main application source file.
Heap.h												Heap Class header with method declarations.
Heap.cpp											Heap class method definitios.

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Reference:
Cormen, Thomas H., Charles Eric. Leiserson, Ronald L. Rivest, and Clifford Stein. Introduction to Algorithms. Cambridge, MA: MIT, 2001. Print.

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


