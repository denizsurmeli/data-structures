find_package(Catch2 REQUIRED)

#Filename here
add_executable(testlib "${PUT_YOUR_FILENAME}")

target_compile_features(testlib PRIVATE cxx_std_17)

target_link_libraries(testlib PRIVATE data-structures Catch2::Catch2)

add_test(NAME testlibtest COMMAND testlib)