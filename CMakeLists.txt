cmake_minimum_required(VERSION 3.10)
project(NetworkSpeedTest)

set(CMAKE_CXX_STANDARD 11)

# Define the executable target
add_executable(NetSpeedTestCLI speed_test.cpp
        main.cpp
        SpeedTest/DownloadSpeedTest.cpp
        SpeedTest/UploadSpeedTest.cpp)

# Link the Winsock library
if(WIN32)
    target_link_libraries(NetSpeedTestCLI ws2_32)  # Explicitly link with ws2_32
endif()
