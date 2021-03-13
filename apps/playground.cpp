#include "../include/data_structures/Linked_List.h"
#include <iostream>
int main(){
  Linked_List<int> v{};
  std::cout<<v.empty()<<std::endl;
  v.push_front(10);
  v.push_front(20);
  v.push_front(30);
  v.push_front(40);
  v.push_front(50);
  std::cout<<v.empty()<<std::endl;
  int arr[] = {1,2,3,4,5};
  Linked_List<int>* c{new Linked_List<int>(arr,5)};
  c->empty();




  return 0;
}