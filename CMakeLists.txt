# Указываем минимальную версию Cmake, необходимую для сборки проекта.
cmake_minimum_required (VERSION 3.12)

# Задаём наименование проекта.
set(PROJECT_NAME LorEngine)
project(${PROJECT_NAME})

# Добавляем подпроекты LorEngineCore и LorEngineEditor.
# Это позволяет организовать структуру проекта и собирать каждую часть отдельно.
add_subdirectory(LorEngineCore)
add_subdirectory(LorEngineEditor)

# Устанавливаем свойство VS_STARTUP_PROJECT для директории с ИСХОДНЫМИ файлами,
# чтобы определить, какой проект будет запускаться по умолчанию в Visual Studio.
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT LorEngineEditor)