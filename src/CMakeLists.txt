set(HEADER_LIST "${data_structures_SOURCE_DIR}/include/data_structures/"${PUT_YOUR_FILENAME}"")

add_library(data-structures "${PUT_YOUR_FILENAME}" ${HEADER_LIST})
target_include_directories(data-structures PUBLIC ../include)

target_compile_features(data-structures PUBLIC cxx_std_17)

source_group(
        TREE "${PROJECT_SOURCE_DIR}/include"
        PREFIX "Header Files"
        FILES ${HEADER_LIST}
)