//
// Created by Deniz Surmeli on 5.03.2021.
//

#ifndef DATA_STRUCTURES_INCLUDE_DATA_STRUCTURES_NODE_H
#define DATA_STRUCTURES_INCLUDE_DATA_STRUCTURES_NODE_H
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
  Node(T value,T* next_value);
  T element;
  Node<T>* next;
};
/**
 * Constructor for Node.h
 * @return None.
 */
template <typename T>
Node<T>::Node(){
  this->element = T{};
  this->next = nullptr;
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
}

/**
 *
 * @tparam T arbitrary type for Node.h
 * @param value Value of the node's package.
 * @param next_value Pointer of the next designated element for linking.
 * @return None.
 */
template <typename T>
Node<T>::Node(T value, T *next_value) {
  this->element = value;
  this->next = next_value;
}
#endif //DATA_STRUCTURES_INCLUDE_DATA_STRUCTURES_NODE_H
