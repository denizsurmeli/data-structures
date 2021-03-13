find_package(Catch2)

add_executable(tests UTEST_SLL.cpp)
target_include_directories(tests PRIVATE ${Catch2_INCLUDE_DIRS})
target_compile_features(tests PRIVATE cxx_std_17)

target_link_libraries(tests PRIVATE Catch2::Catch2)