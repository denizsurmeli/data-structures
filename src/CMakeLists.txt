#set(HEADER_LIST ../include/data_structures/Singly_Linked_List.h ../include/data_structures/Node.h)
#
#add_library(data-structures ${HEADER_LIST})
#target_include_directories(data-structures PUBLIC ../include)
#
#target_compile_features(data-structures PUBLIC cxx_std_17)
#
#source_group(
#        TREE "${PROJECT_SOURCE_DIR}/include"
#        PREFIX "Header Files"
#        FILES ${HEADER_LIST}
#)