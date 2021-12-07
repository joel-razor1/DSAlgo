# Data Structures and Algorithms 
### (Yeah, it's probably going to be long README, I'll make it neat after I cover most of the DS Concepts, consider this repo as a DSAhub)


## 1. Linked List

It's a DS used for storing collections of data.

### 1.1 Props:
1.	 Elements are connected by pointers.
2.	 It can grow or shrink in size during runtime.
3.	 Memory allocation is done as list grows.

![This is an image of linked list](https://raw.githubusercontent.com/joel-razor1/DSAlgo/845dc5e23c8620e971991a3657b34e2e22910d73/assets/1.svg)

***Figure:  Image of a linked List***


### 1.2 Advantages of using Linked Lists
1.	It can be expanded in constant time.
2.	Unlike arrays, there is no wastage of memory upfront.

### 1.3 Disadvantages of using Linked Lists
1.	Has O(n) access time unlike the array which has O(1).
2.	Memory wastage in terms of extra reference pointers.
3.	In some cases, it is hard to manipulate.

### 1.4 Parameters
	- Indexing: 						O(n)
	- Insertion/Deletion at beginning: 	O(1)
	- Insertion at the end: 			O(n)
	- Deletion at the end: 				O(n)
	- Insertion/Deletion in middle: 	O(n)
	- Wasted space: 					O(n) (for pointers) 

### 1.5 Singly Linked Lists

Each node contains a pointer which is pointed towards the next node. Last node is pointed to NULL (to indicate the end of the list).

Below, you can find a general type declaration of a singly linked list:

```
struct Node{
	int data;
	struct Node *next;
};
```
#### 1.5.1 Basic Operations
a)	Traversing lists
b) Inserting an item
c) Deleting an item

**Traversing**
_How would you traverse?_
Simple, follow the pointers, display/count the nodes if you like and stop when the pointer points to NULL.

***PseudoCode for Traversal***

```
int traversal(struct Node *head){
	struct Node *current=head;
	int count=0;
	while (current!=NULL){
		count++;
		printf("%i",&current->data);
		}
	return count;
	}
```
Time Complexity: O(n)
Space Complexity: O(1)


**Inserting a node in Linked List**

It can be done in 3 ways:


-	Inserting before head
-	Inserting after tail
-	Inserting at any random location in between head and tail


** Inserting at the beginning**
	
	
