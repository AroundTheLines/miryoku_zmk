# Install script for directory: /Users/qilewang/GithubRepos/Keyboards/zmk/zephyr

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/Users/qilewang/Downloads/zephyr-sdk-0.14.2/arm-zephyr-eabi/bin/arm-zephyr-eabi-objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/zephyr/arch/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/zephyr/lib/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/zephyr/soc/arm/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/zephyr/boards/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/zephyr/subsys/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/zephyr/drivers/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/modules/CANopenNode/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/modules/civetweb/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/modules/cmsis/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/modules/fatfs/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/modules/atmel/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/modules/espressif/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/modules/hal_gigadevice/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/modules/hal_nordic/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/modules/nuvoton/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/modules/quicklogic/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/modules/hal_rpi_pico/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/modules/stm32/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/modules/telink/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/modules/libmetal/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/modules/littlefs/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/modules/lvgl/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/modules/lz4/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/modules/mbedtls/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/modules/mipi-sys-t/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/modules/nanopb/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/modules/nrf_hw_models/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/modules/open-amp/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/modules/tflite-micro/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/modules/tinycbor/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/modules/tinycrypt/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/modules/TraceRecorder/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/modules/zscilib/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/modules/drivers/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/zephyr/kernel/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/zephyr/cmake/flash/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/zephyr/cmake/usage/cmake_install.cmake")
  include("/Users/qilewang/GithubRepos/Keyboards/leeloo_miryoku/build/right/zephyr/cmake/reports/cmake_install.cmake")

endif()

