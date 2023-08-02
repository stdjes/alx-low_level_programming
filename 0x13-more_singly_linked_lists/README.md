# 0x13. C - More singly linked lists

A singly linked list is a data structure composed of a sequence of nodes, where each node contains two parts: data and a reference (or link) to the next node in the sequence. Here's a short note on the common operations performed on a singly linked list:

### Insertion:

Insert at the beginning: Create a new node with the given data, set its next pointer to the current head, and update the head to point to the new node.
Insert at the end: Traverse the list until you reach the last node, then create a new node with the given data and set the next pointer of the last node to the new node.
####Insert after a specific node: 
Locate the node after which you want to insert the new node, create the new node, and update the pointers accordingly.

###Deletion:

Delete at the beginning: Update the head to point to the next node and deallocate the memory of the previous head.
Delete at the end: Traverse the list until you reach the second-to-last node, set its next pointer to null, and deallocate the memory of the last node.
####Delete a specific node: 
Locate the node you want to delete and update the next pointer of the previous node to bypass the node to be deleted. Then, deallocate the memory of the deleted node.

###Traversal:

To traverse a singly linked list, start from the head and follow the next pointers until you reach the end (when the next pointer is null). During traversal, you can perform operations on the data of each node.

###Searching:

To search for a specific element in the list, start from the head and compare the data of each node with the target value. If found, return the node or its position; otherwise, continue traversing until the end.

###Length:

Calculate the length of the singly linked list by traversing it and counting the number of nodes until the end is reached.

###Concatenation:

To concatenate two singly linked lists, find the last node of the first list and set its next pointer to the head of the second list.

Singly linked lists are efficient for insertions and deletions at the beginning but less efficient for random access (compared to arrays) as it requires sequential traversal. However, they are useful in situations where dynamic data structures are needed, and elements need to be added or removed frequently.
