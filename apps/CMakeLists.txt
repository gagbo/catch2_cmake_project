add_executable(app app.cpp)
target_link_libraries(app PUBLIC baselib)
target_include_directories(app PRIVATE "${PROJECT_BINARY_DIR}/include")
