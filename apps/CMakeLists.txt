find_package(Catch2 REQUIRED)

add_executable(main playground.cpp ../tests/UTEST_SLL.cpp)
target_compile_features(main PRIVATE cxx_std_17)
target_link_libraries(main PRIVATE Catch2::Catch2)
#target_link_libraries(main PRIVATE data-structures)