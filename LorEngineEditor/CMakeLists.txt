# Указываем минимальную версию CMake, необходимую для сборки проекта.
cmake_minimum_required (VERSION 3.12)

# Устанавливаем имя проекта для редактора.
set(EDITOR_PROJECT_NAME LorEngineEditor)

# Создаем исполняемый файл с именем, заданным переменной EDITOR_PROJECT_NAME,
# который будет собираться из исходного файла main.cpp.
add_executable(${EDITOR_PROJECT_NAME}
	src/main.cpp
)

# Линкуем LorEngineCore с проектом редактора.
target_link_libraries(${EDITOR_PROJECT_NAME} LorEngineCore)

# Указываем, что проект использует стандарт C++17.
target_compile_features(${EDITOR_PROJECT_NAME} PUBLIC cxx_std_17)

# Устанавливаем свойства цели, в данном случае, каталог для выходного файла исполняемого файла.
set_target_properties(${EDITOR_PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/)