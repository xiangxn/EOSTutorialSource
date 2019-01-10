add_contract(helloworld helloworld ${CMAKE_CURRENT_SOURCE_DIR}/src/helloworld.cpp)
target_include_directories(helloworld.wasm
   PUBLIC
   ${CMAKE_CURRENT_SOURCE_DIR}/include)

set_target_properties(helloworld.wasm
   PROPERTIES
   RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}")
