//
// Created by Deniz Surmeli on 5.03.2021.
//

#ifndef DATA_STRUCTURES_INCLUDE_DATA_STRUCTURES_NODE_H
#define DATA_STRUCTURES_INCLUDE_DATA_STRUCTURES_NODE_H
#include <iostream>

/**
 *
 * @tparam T arbitrary package value for Node.h
 *
 * Basic class for linked lists. At the moment it only supports forward linking,
 * in a short brief we will add backward linking either.
 *
 *
 */
template <typename T>
class Node{
public:
  Node();
  explicit Node(T value);
  [[deprecated]] Node(T value,T* next_value);
  friend std::ostream& operator<<(std::ostream& stream,const Node& ref);
  T element;
  Node<T>* next;
  Node<T>* previous;
};


/**
 * Constructor for Node.h
 * @return None.
 */
template <typename T>
Node<T>::Node(){
  this->element = T{};
  this->next = nullptr;
  this->previous = nullptr;
}

/**
 *Constructor for Node.h
 *
 *@tparam Value value of the node's package.
 *@return None.
 */
template <typename T>
Node<T>::Node(T value) {
  this->element = value;
  this->next = nullptr;
  this->previous = nullptr;
}

/**
 *
 * @tparam T arbitrary type for Node.h
 * @param value Value of the node's package.
 * @param next_value Pointer of the next designated element for linking.
 * @return None.
 */
template <typename T>
[[deprecated]] Node<T>::Node(T value, T *next_value) {
  this->element = value;
  this->next = next_value;
  this->previous = nullptr;
}
template <typename T>
std::ostream &operator<<(std::ostream &stream, const Node<T> &ref) {
  stream << ref.previous <<"<--" << ref.element << "-->" << ref.next;
  return stream;
}
#endif //DATA_STRUCTURES_INCLUDE_DATA_STRUCTURES_NODE_H
