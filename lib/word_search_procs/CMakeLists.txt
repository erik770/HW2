add_library(word_search_procs SHARED src/word_search_procs.c)

target_include_directories(word_search_procs PUBLIC include)
target_link_libraries(word_search_procs PUBLIC utils)
