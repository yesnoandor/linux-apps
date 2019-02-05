# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)

set(LIBDEBUG_SRC debug.c)
add_library(flexdebug SHARED ${LIBDEBUG_SRC})
add_library(flexdebug_static STATIC ${LIBDEBUG_SRC})

# 设置输出库的名称
set_target_properties(flexdebug_static PROPERTIES OUTPUT_NAME "flexdebug")

# 避免同名不同类型的库覆盖
set_target_properties(flexdebug_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)
set_target_properties(flexdebug PROPERTIES CLEAN_DIRECT_OUTPUT 1)

# 增加动态库版本号和API版本
set_target_properties(flexdebug PROPERTIES VERSION 1.4 SOVERSION 1)


message(STATUS "lib output path : ${LIBRARY_OUTPUT_PATH}")
message(STATUS "exe output path : ${EXECUTABLE_OUTPUT_PATH}")
