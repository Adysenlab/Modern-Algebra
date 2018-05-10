
############################################################
# Create a library {{ dynamic }}
############################################################
add_library(hello_library SHARED 
    Hello.cpp
)
add_library(hello::library ALIAS hello_library)

target_include_directories(hello_library
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/include
)



############################################################
# Create the program
############################################################

# Add an executable with the above sources
add_executable(hello_binary
    main.cpp
)

# link the new hello_library target with the hello_binary target
target_link_libraries( hello_binary
    PRIVATE 
        hello::library
)