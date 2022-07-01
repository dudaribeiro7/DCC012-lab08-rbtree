file(GLOB source_files *.cpp *.h)
add_library(librb ${source_files})
target_include_directories(librb PUBLIC ${PROJECT_SOURCE_DIR}/librb)