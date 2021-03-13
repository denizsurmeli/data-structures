//
// Created by Deniz Surmeli on 5.03.2021.
//

#ifndef DATA_STRUCTURES_INCLUDE_DATA_STRUCTURES_Linked_List_H
#define DATA_STRUCTURES_INCLUDE_DATA_STRUCTURES_Linked_List_H
#include "Node.h"
#include <iostream>
/**
 *
 *
 * Doubly Linked List. Using forward linking it creates an effective chain
 * of data. Actions like searching, that requires traversal of items are
 * bad in performance wise.
 *
 *@tparam T Arbitrary value for Node's package.
 *
 */

template <typename T>
class Linked_List{
public:
  Linked_List();
  [[deprecated]] Linked_List(T* arr,int len);
  ~Linked_List();
  bool empty() const;
  const T& front() const;
  void push_front(const T& value);
  T pop_front();
  const T& back() const;
  void push_back(const T& value);
  T pop_back();
  bool exist_at(int index) const;
  T at(int index) const;
  int length() const;
  void display_DEBUG_MODE() const;
private:
  Node<T>* head;
  Node<T>* tail;
  int size;
};
/**
 *
 * @tparam T
 */
template <typename T>
Linked_List<T>::Linked_List():head{nullptr},tail{nullptr},size{0}{
  //looks fine but probably will yield segfault
  //  this->head->next = this->tail;
  //  this->tail->previous = this->head;
  //yes it did yield segfault you donut


}
/**
 * Constructs a linked list with given array.
 *
 * @tparam T
 * @param arr Array of T type elements. Default constructor for arrays.
 * @param len Length of the array for indexing.
 */
template<typename T>
[[deprecated]] Linked_List<T>::Linked_List(T *arr, int len):head{nullptr},tail{nullptr},size{0} {
  for(auto i{0};i<=len-1;i++){
    this->push_front(arr[len-i-1]);
  }
}
/**
 *
 * @tparam T
 */
template <typename T>
Linked_List<T>::~Linked_List(){
  //@TODO:rebuild destructor
  while(!this->empty())
    this->pop_front();
}
/**
 * Function that is checking whether the linked list has an element or not.
 * O(1) lookup.
 *
 * @tparam T
 * @return Boolean value. It checks whether the linked list has elements or not. Returns True if empty, False
 * otherwise.
 */
template <typename T>
bool Linked_List<T>::empty() const {
  //needs some adjustment: probably we should build something different in the constructor, probably like assigning
  //head to tail for referrring that the set is empty.But then the first push action will require some additional handles
  //for such operation. @TODO:refer to this comment when you rebuild the constructor.
  //@NOTE: The tail-head confusion must be dealt within push_front and push_back functions ::0xA
  return this->size == 0;

}
/**
 * Returns head node's value.
 * @tparam T
 * @return Node's head as a reference, reciever can not mutate the node.
 */
template <typename T>
const T& Linked_List<T>::front() const {
  return this->head->element;
}
/**
 * Adds a new node with value to the beginning of the list.
 * \Complexity O(1)
 * @tparam T
 * @param value Adding the value as a new node to the start of the list.
 *
 * @return None.
 */
template <typename T>
void Linked_List<T>::push_front(const T& value){

    if(this->head == nullptr){
      this->head = new Node<T>(value);
      this->tail = this->head;
      this->size++;
    } else{
      auto temp = new Node<T>(value);
      temp->next = this->head;
      this->head->previous = temp;
      this->head = temp;
      this->size++;
    }


}
/**
 * Popping the front node of the list.
 *
 * @tparam T
 * @return <T> type value.
 */
template <typename T>
T Linked_List<T>::pop_front() {
  Node<T>* temp = this->head;
  this->head  = temp->next;
  T hold = temp->element;
  delete temp;
  this->size++;
  return hold;
}
/**
 * Viewing for last elements value. Constant access, will not modify anything in list.
 * \Complexity O(1)
 *
 * @tparam T
 * @return <T>type value.
 */
template <typename T>
const T& Linked_List<T>::back() const{
  return this->tail->element;
}

/**
 * Adding a new element to the end of the list.
 * \Complexity O(1)
 * @tparam T
 * @param value Element value for the node.
 * @return None.
 */
template <typename T>
void Linked_List<T>::push_back(const T &value) {
  if(this->empty()){
    this->tail = new Node<T>(value);
    this->head = this->tail;
    this->size++;
  }else{
    Node<T>* temp = new Node<T>(value);
    temp->previous = this->tail;
    this->tail = temp;
    this->size++;
//    delete temp; -> @TODO:test this fragment -> won't work since the head will point to nothing
  }

}
/**
 * \Complexity O(1)
 * @tparam T
 * @return <T> type value.
 *
 */
template <typename T>
T Linked_List<T>::pop_back() {
  Node<T>* temp = this->tail;
  this->tail = this->tail->previous;
  T hold = temp->element;
  delete temp;
  return hold;
}
/**
 *
 * @tparam T
 * @param index
 * @return
 */
template <typename T>
bool Linked_List<T>::exist_at(int index) const {
  //@TODO:Implement <fn>:exists_at
}

/**
 *
 * @tparam T
 * @param index
 * @return
 */
template <typename T>
T Linked_List<T>::at(int index) const {
  //@TODO:Implement <fn>:at
}


/**
 * Returns the size of the list. Since this is an OOP object, it is important to have properties such so.
 *
 * @tparam T
 * @return size_t Size of the list.
 */
template <typename T>
int Linked_List<T>::length() const {
  return this->size;
}

template <typename T>
[[deprecated]] void Linked_List<T>::display_DEBUG_MODE() const {
  //@FIXME:Displaying for debugging utterly distrupted. PRIORITY:0xF.
  Node<T>* temp = this->head;
  while(temp != nullptr){
//    std::string p = &(temp->previous) == nullptr ? "nullptr":&temp->previous;
//    std::string n = &(temp->next) == nullptr ? "nullptr":&temp->next;
    std::cout<<temp->element<<std::endl;
    temp = temp->next;
  }

}

#endif //DATA_STRUCTURES_INCLUDE_DATA_STRUCTURES_Linked_List_H
