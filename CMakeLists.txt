# Load zephyr build system and add extra modules if required
cmake_minimum_required(VERSION 3.13.1)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(zephyr_sample_project)

# Add your source file to the "app" target.
target_sources(app PRIVATE src/main.c)