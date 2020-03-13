| Joseph Kim|
| :---          	|
| s198022       	|
| A1US - AOS - Code Design and Data Structures  |
| Linked List Documentation |

## I. Requirements

1. Description of Problem

	- **Name**: LinkedList

	- **Problem Statement**:
	Create a program that shows how inserting and shifting around nodes by creating a LinkedList to test if the nodes are in correct order and proper function usage.

	- **Problem Specifications**:  Create a LinkedList in C++ to show node functions


|
2. ### Object Information

   **File**: Main.cpp

     Description: The main body where raylib loops and loads textures/draw nodes

    **Attributes**

         Name: InitWindow
             Description: Raylib's intialize window function
             Visiblity: public

        Name: SetTargetFPS
             Description: Run the game loop
             Visibility: public

        Name: WindowShouldClose
             Description: Detect window close button or ESC key
             Visiblity: public

        Name: BeginDrawing
             Description: Raylib's Drawing Function
             Visiblity: public

        Name: ClearBackGround
             Description: Raylib's Clear Background into designated color
             Visiblity: public

        Name: EndDrawing
             Description: Raylib's End Draw Function
             Visiblity: public

        Name: CloseWindow
             Description: Closes the window and OpenGL context
             Visiblity: public

     **Operations**:

        Name: screenWidth
             Description: The width of the window application
             Type: int
             Visibility: public

        Name: screenHeight
             Description: The height of the window application
             Type: int
             Visibility: public

        Name: UList
             Description: Call function from UnorderedList class
             Type: class
             Visibility: public


   **File**: Iterator.h

     Description: The header class for Iterators, iterating numbers to find correct node position ect.

    **Attributes**

        Name: template<typename T>
             Description: Used for specifying that a dependent name in a template definition or declaration
             Visibility: public
             Type: void
             Arguements: int

     **Operations**:

        Name: Node<T>* currentNode
             Description: The current node it is on
             Type: Node<T>*
             Visibility: private

        Name: Iterator<T> operator++(int)
             Description: The next node in the list
             Type: Iterator<T>
             Visibility: public

        Name: Iterator<T> operator--(int)
             Description: The previous node in the list
             Type: Iterator<T>
             Visibility: public

        Name: T operator*();
             Description: Returns the currentNode's info
             Type: type T
             Visibility: public

        Name: Iterator()
             Description: 
             Type: constructor
             Visibility: public

        Name: ~Iterator()
             Description: 
             Type: Deconstructor
             Visibility: public

        Name: Iterator(Node<T>* ptr)
             Description: currentNode Pointer
             Type: Iterator<T>
             Visibility: public

        Name: operator==(const Iterator<T>&)const
             Description:  Check if node is correct position
             Type: const Iterator<T>
             Visibility: public

        Name: operator!=(const Iterator<T>&)const
             Description: Check if node is in a different position
             Type: const Iterator<T>
             Visibility: public

   **File**: List.h

     Description: Header class for List, the list of nodes in the order they're in.

     **Operations**:

        Name: mCount
             Description: The count of the list
             Type: int
             Visibility: protected

        Name: m_first
             Description: The first spot in the list
             Type: Node<T>*
             Visibility: protected

        Name: m_last
             Description: The last spot in the list
             Type: Node<T>*
             Visibility: protected

        Name: initializeList
             Description: To initialize the list
             Type: void
             Visibility: public

        Name: isListEmpty
             Description: To check if the list is empty
             Type: bool
             Visibility: public

        Name: length
             Description: The length of the list itself
             Type: int
             Visibility: public

        Name: Iterator<T> begin
             Description: The beginning of the list
             Type: Iterator<T>
             Visibility: public

        Name: Iterator<T> end
             Description: The ending of the list
             Type: Iterator<T>
             Visibility: public

        Name: List
             Description: The List of the nodes
             Type: constructor
             Visibility: public

        Name: search
             Description: Searches for the node
             Type: virtual bool
             Visibility: public

        Name: insertFirst
             Description: Inserts the node in the first of the list
             Type: virtual void
             Visibility: public

        Name: insertLast
             Description: Inserts the node in the last of the list
             Type: virtual void
             Visibility: public

        Name: deleteNode
             Description: Deletes the node being deleted
             Type: virtual void
             Visibility: public

   **File**: Node.h

     Description: Header class for Node

     **Operations**:

        Name: info
             Description: Gets the info of the node
             Type: T class

        Name: next
             Description: Next currentNode
             Type: Node<T>*
             Visibility: public

        Name: previous
             Description: previous currentNode
             Type: Node<T>*
             Visibility: public

        Name: Node<T>*
             Description: Node<T>* constructor
             Type: Node<T>*
             Visibility: public


   **File**: UnorderedList.h

     Description: The header class for UnorderedList

     **Operations**:

        Name: search
             Description: Searches for the node
             Type: bool
             Visibility: public

        Name: insertFirst
             Description: Inserts the node in the first of the list
             Type: void
             Visibility: public

        Name: insertLast
             Description: Inserts the node in the last of the list
             Type: void
             Visibility: public

        Name: deleteNode
             Description: Deletes the node being deleted
             Type: void
             Visibility: public
