//
// Created by Deniz Surmeli on 7.03.2021.
//

#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "../include/data_structures/Linked_List.h"
#include <vector>

TEST_CASE("Linked_List<T>::empty() --EXPECT CORRECT"){
  //arbitrary <T> type is okay
  Linked_List<int> v{};
  REQUIRE(v.empty() == TRUE);
}
TEST_CASE("Linked_List<T>::empty() --EXPECT FALSE"){
  int arr[] = {1,2,3,4,5};
  Linked_List<int> v{}
}