# CMakeList.txt: проект CMake для Task30_1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Task30_1 "Task30_1.cpp" "Task30_1.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Task30_1 PROPERTY CXX_STANDARD 20)
endif()


target_link_libraries("Task30_1" PRIVATE cpr::cpr)
# TODO: Добавьте тесты и целевые объекты, если это необходимо.
