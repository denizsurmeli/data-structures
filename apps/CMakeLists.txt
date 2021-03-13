find_package(Catch2 REQUIRED)

add_executable(main playground.cpp)
target_compile_features(main PRIVATE cxx_std_17)
