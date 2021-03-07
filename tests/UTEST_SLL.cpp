//
// Created by Deniz Surmeli on 7.03.2021.
//

#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "../include/data_structures/Singly_Linked_List.h"

TEST_CASE("Singly_Linked_List base functions tests"){
  Singly_Linked_List<int> v{};
  v.add_front(1);
  v.add_front(2);
  v.add_front(3);
  REQUIRE(v.front() == 3);
  REQUIRE(v.empty() == false);

}