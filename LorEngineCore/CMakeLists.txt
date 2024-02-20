# Указываем минимальную версию CMake, необходимую для сборки проекта.
cmake_minimum_required (VERSION 3.12)

# Устанавливаем имя проекта для ядра движка.
set(ENGINE_PROJECT_NAME LorEngineCore)

# Определяем список публичных заголовочных файлов.
set(ENGINE_PUBLIC_INCLUDES
	includes/LorEngineCore/test.hpp
)

# Определяем список приватных исходных файлов.
set(ENGINE_PRIVATE_SOURCES
	src/LorEngineCore/test.cpp
)

# Объединяем публичные и приватные исходные файлы в один список.
set(ENGINE_ALL_SOURCES
	${ENGINE_PUBLIC_INCLUDES}
	${ENGINE_PRIVATE_SOURCES}
)

# Создаем статическую библиотеку с именем, заданным переменной ENGINE_PROJECT_NAME,
# которая будет собираться из всех исходных файлов из списка ENGINE_ALL_SOURCES.
add_library(${ENGINE_PROJECT_NAME} STATIC
	${ENGINE_ALL_SOURCES}
)

# Группируем файлы в структуру проекта в IDE (например, Visual Studio).
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES
	${ENGINE_ALL_SOURCES}
)

# Указываем публичные включаемые директории для библиотеки.
target_include_directories(${ENGINE_PROJECT_NAME} PUBLIC includes)

# Указываем приватные включаемые директории для библиотеки.
target_include_directories(${ENGINE_PROJECT_NAME} PRIVATE src)

# Указываем использование стандарта C++17 для библиотеки.
target_compile_features(${ENGINE_PROJECT_NAME} PUBLIC cxx_std_17)