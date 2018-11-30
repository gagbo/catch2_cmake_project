add_library(baselib STATIC lib.cpp ../include/project/lib.hpp)
target_include_directories(baselib PUBLIC ../include)
target_compile_features(baselib PUBLIC cxx_std_11)
