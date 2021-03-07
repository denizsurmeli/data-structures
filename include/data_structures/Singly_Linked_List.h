//
// Created by Deniz Surmeli on 5.03.2021.
//

#ifndef DATA_STRUCTURES_INCLUDE_DATA_STRUCTURES_SINGLY_LINKED_LIST_H
#define DATA_STRUCTURES_INCLUDE_DATA_STRUCTURES_SINGLY_LINKED_LIST_H
#include "Node.h"
/**
 *
 *
 * Singly Linked List. Using forward linking it creates an effective chain
 * of data. Actions like searching, that requires traversal of items are
 * bad in performance wise.
 *
 *@tparam T Arbitrary value for Node's package.
 *
 */

template <typename T>
class Singly_Linked_List{
public:
  Singly_Linked_List();
  ~Singly_Linked_List();
  bool empty() const;
  const T& front() const;
  void add_front(const T& value);
  void remove_front();
private:
  Node<T>* head;
};
/**
 * Function that is checking whether the linked list has an element or not.
 * O(1) lookup.
 *
 * @tparam T
 * @return Boolean value. It checks whether the linked list has elements or not. Returns True if empty, False
 * otherwise.
 */
template <typename T>
bool Singly_Linked_List<T>::empty() const {
  return head == nullptr;
}
/**
 * @TODO:Write DOC 001
 * @tparam T
 * @return Node's head as a reference, reciever can not mutate the node.
 */
template <typename T>
const T& Singly_Linked_List<T>::front() const {
  return this->head->element;
}
/**
 *
 * @tparam T
 * @param value
 */
template <typename T>
void Singly_Linked_List<T>::add_front(const T& value){
  Node<T>* temp = new Node<T>;
  temp->next = this->head;
  temp->element = value;
  head = temp;
}
/**
 *
 * @tparam T
 */
template <typename T>
void Singly_Linked_List<T>::remove_front() {
  Node<T>* temp = this->head;
  this->head  = temp->next;
  delete temp;
}

template <typename T>
Singly_Linked_List<T>::Singly_Linked_List():head{nullptr}{}


/**
 *
 * @tparam T
 */
template <typename T>
Singly_Linked_List<T>::~Singly_Linked_List(){
  while(!this->empty()) this->remove_front();
}

#endif //DATA_STRUCTURES_INCLUDE_DATA_STRUCTURES_SINGLY_LINKED_LIST_H
