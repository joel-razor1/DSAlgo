# Data Structures and Algorithms

### (Yeah, it's probably going to be long README, I'll make it neat after I cover most of the DS Concepts, consider this repo as a DSAhub)

## 1. Linked List

It's a DS used for storing collections of data.

### 1.1 Props:

1.  Elements are connected by pointers.
2.  It can grow or shrink in size during runtime.
3.  Memory allocation is done as list grows.

![This is an image of linked list](https://raw.githubusercontent.com/joel-razor1/DSAlgo/845dc5e23c8620e971991a3657b34e2e22910d73/assets/1.svg)

**_Figure: Image of a linked List_**

### 1.2 Advantages of using Linked Lists

1. It can be expanded in constant time.
2. Unlike arrays, there is no wastage of memory upfront.

### 1.3 Disadvantages of using Linked Lists

1. Has O(n) access time unlike the array which has O(1).
2. Memory wastage in terms of extra reference pointers.
3. In some cases, it is hard to manipulate.

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

a) Traversing lists
b) Inserting an item
c) Deleting an item

**Traversing**
_How would you traverse?_
Simple, follow the pointers, display/count the nodes if you like and stop when the pointer points to NULL.

**_PseudoCode for Traversal_**

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

- Inserting before head
- Inserting after tail
- Inserting at any random location in between head and tail

**Inserting before head**'

Logic: new node's next pointer points to head and the head pointer now must point to the new node.

1. Update next pointer of new node, to point to the current head.
   ![Image 1 of inserting before head](https://raw.githubusercontent.com/joel-razor1/DSAlgo/49423d154ef0793168b653809f8abd1cb7e5b463/assets/2.svg)

2. Update the head pointer to the new node.

![Image 2 of inserting before head](https://raw.githubusercontent.com/joel-razor1/DSAlgo/49423d154ef0793168b653809f8abd1cb7e5b463/assets/3.svg)

**Inserting After Tail**

Logic: Last Node's next pointer should point towards new Node. New node should point towards NULL.

![Image 1 of inserting after tail](https://raw.githubusercontent.com/joel-razor1/DSAlgo/2e757c988f4b2f5bb70284807553524918c3aa19/assets/4.svg)

![Image 2 of inserting after tail](https://raw.githubusercontent.com/joel-razor1/DSAlgo/2e757c988f4b2f5bb70284807553524918c3aa19/assets/5.svg)

**Inserting at any random location between head and tail node**

_**Note**: In this case, 2 pointers need to be maintained. Pointers pointing to current node and the node previous to the current node. One point to observe here is that if you want to insert your node at position 'x', you should first traverse till position 'x-1'. We'll call this x-1th node the position node._

Logic: new node's next pointer should point towards position node's next pointer.

![Image 1 of inserting in between head and tail](https://raw.githubusercontent.com/joel-razor1/DSAlgo/55ca38d0641273f995e468419b6d606e071459e6/assets/6.svg)
position node's next pointer will now point towards new node.

![Image 2 of inserting in between head and tail](https://raw.githubusercontent.com/joel-razor1/DSAlgo/55ca38d0641273f995e468419b6d606e071459e6/assets/7.svg)

```
void insertLinkedList (struct Node **head, int data, int postition)
{
	int k=1;
	struct Node *p, *q, *newNode;
	newNode = (Node *)malloc(sizeof(struct Node));
	if (!newNode){
		printf("Memory Error"); //why is it so?
		return;
	}
	newNode->data=data;
	p =*head;
	// inserting at the beginning
if (position==1){
newNode->next=p;
*head=newNode;
}
else{
	//Traverse the list until the position where we want to insert
	while ((p!==NULL) && (k<position)){
	k++;
	q=p;
	p=p->next;
	}
	p->next=newNode;
	newNode->next=p;
}
}
```
