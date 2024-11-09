# CMakeList.txt: проект CMake для string-calculator; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("string-calculator")

add_executable(string-calculator "src/exceptions/exceptions.hpp" "src/lexer/lexer.h" "src/lexer/lexer.cpp" "src/main/calculator.h" "src/main/calculator.cpp" "src/main/main.cpp" "include/include.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET string-calculator PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
 