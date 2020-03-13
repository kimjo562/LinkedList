#pragma once

// typename = "could be" int, string, char ect. ect. of T
#pragma once

template<typename T>
class Node {
public:
	T info;
	Node<T>* next;
	Node<T>* previous;
	Node<T>();
};

template<typename T>
inline Node<T>::Node()
{
}
