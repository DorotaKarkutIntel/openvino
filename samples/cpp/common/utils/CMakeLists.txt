# Copyright (C) 2018-2022 Intel Corporation
# SPDX-License-Identifier: Apache-2.0
#
set(TARGET_NAME "ie_samples_utils")

file(GLOB_RECURSE SOURCES "*.cpp" "*.hpp" "*.h")
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCES})

add_library(${TARGET_NAME} STATIC EXCLUDE_FROM_ALL ${SOURCES})
set_target_properties(${TARGET_NAME} PROPERTIES FOLDER "src")

target_include_directories(${TARGET_NAME}
    PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")

find_package(OpenVINO REQUIRED COMPONENTS Runtime)

target_link_libraries(${TARGET_NAME} PUBLIC openvino::runtime gflags)

if(COMMAND add_clang_format_target)
    add_clang_format_target(${TARGET_NAME}_clang FOR_TARGETS ${TARGET_NAME})
endif()
