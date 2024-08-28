cmake_minimum_required(VERSION 3.7)
set(PROJECT_NAME sfml_project)

project(${PROJECT_NAME})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -static")

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp States.cpp States.h GUIComponent.h
        Snapshot.h Snapshot_Interface.h Keyboard_Shortcut.cpp Keyboard_Shortcut.h
        History.cpp History.h HistoryNode.h TextInput.cpp TextInput.h TextInputSnapshot.cpp TextInputSnapshot.h
        TypingNotChanged.cpp TypingNotChanged.h Typing.h Typing.cpp Font.cpp Font.h Application.cpp Application.h Letter.cpp Letter.h MultiText.cpp MultiText.h
        TextBox.cpp TextBox.h Title.cpp Title.h Cursor.cpp Cursor.h WordSort.cpp WordSort.h FileReader.cpp FileReader.h Word.cpp Word.h
        Heap.cpp Heap.h
        DropDownMenu/AllBoxes.cpp DropDownMenu/AllBoxes.h DropDownMenu/Box.cpp DropDownMenu/Box.h DropDownMenu/Menu.cpp DropDownMenu/Menu.h
        DropDownMenu/Position.cpp DropDownMenu/Position.h DropDownMenu/MouseEvent.cpp DropDownMenu/MouseEvent.h FileTree/FileItem.cpp FileTree/FileItem.h FileTree/FileTreeNode.h FileTree/FileTree.cpp FileTree/FileTree.h FileTree/Image.cpp FileTree/Image.h FileTree/FileTreeNode.cpp FontEnum.h FileTree/ImageEnum.h)

if (CMAKE_BUILD_TYPE STREQUAL "Release")
    add_executable(${PROJECT_NAME} WIN32 ${SOURCE_FILES})
else ()
    add_executable(${PROJECT_NAME} ${SOURCE_FILES})
endif ()

set(SFML_ROOT C:/SFML-2.5.1)
set(SFML_STATIC_LIBRARIES TRUE)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
#set(SFML_DIR C:/SFML/SFML-2.5.1/lib/cmake/SFML)
find_package(SFML  REQUIRED COMPONENTS audio graphics window system)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(${PROJECT_NAME} ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
endif ()