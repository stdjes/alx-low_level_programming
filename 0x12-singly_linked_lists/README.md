# 0x12 - C. Singly Linked Lists

### Introduction
A singly linked list is a fundamental data structure in C programming. It is a collection of elements called "nodes." Each node contains a value and a reference (a pointer) to the next node in the sequence. The last node points to NULL, indicating the end of the list. Singly linked lists provide an efficient way to store and manipulate data dynamically, making them essential in various applications.

### Implementation Details

#### Node Structure
The node structure is the basic building block of a singly linked list. Each node contains two fields:

1. `data`: This field stores the value of the node. It can be of any data type, depending on the requirements of the application.
2. `next`: This field is a pointer that stores the memory address of the next node in the list.

#### Operations

1. **Creating a Linked List**
   To create an empty linked list, we initialize a pointer to the first node (head) and set it to NULL. This indicates that the list is empty and doesn't contain any nodes.

2. **Insertion**
   Inserting a new node can be done at the beginning, middle, or end of the linked list, depending on the specific requirement. Common insertion methods include:
   - **Inserting at the beginning (prepend):** In this method, we create a new node, set its `data`, and make its `next` point to the current head node. Then, we update the head to point to the new node.
   - **Inserting at the end (append):** In this method, we create a new node, set its `data`, and make its `next` point to NULL. If the list is empty, we update the head to point to the new node. Otherwise, we traverse the list to find the last node and make its `next` point to the new node.

3. **Deletion**
   Removing a node can also be done from the beginning, middle, or end of the linked list, based on the specific requirement. Common deletion methods include:
   - **Deleting the first node:** In this method, we update the head to point to the second node and free the memory occupied by the first node.
   - **Deleting a node by value:** In this method, we traverse the list to find the node with the given value. Once found, we update the `next` pointer of the previous node to bypass the node to be deleted and then free its memory.

4. **Traversing**
   Traversing the linked list allows us to access or display the elements it contains. To traverse the list, we start from the head and move through the list node by node until we reach the end (NULL). During traversal, we can perform operations on each node.

5. **Memory Management**
   It is essential to deallocate memory after using the linked list to avoid memory leaks. To do this, we traverse the list and free the memory occupied by each node.

### Usage
You can include the provided singly linked list implementation in your C project to utilize its functionalities. The implementation is flexible and can be used for various applications, such as implementing a stack, queue, or general data storage.

### Conclusion
Singly linked lists are a crucial data structure in C programming, offering dynamic memory allocation and efficient element manipulation. Understanding the basic operations and implementation details will help you use this data structure effectively in your projects.
