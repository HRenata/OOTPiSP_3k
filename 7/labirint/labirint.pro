TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Door.cpp \
        MagicDoor.cpp \
        MagicMazeFactory.cpp \
        MagicRoom.cpp \
        Maze.cpp \
        MazeFactory.cpp \
        MazeFactoryPrototype.cpp \
        MazeGame.cpp \
        OrdinaryDoor.cpp \
        OrdinaryMazeFactory.cpp \
        OrdinaryRoom.cpp \
        Room.cpp \
        Wall.cpp \
        main.cpp

HEADERS += \
    Door.h \
    MagicDoor.h \
    MagicMazeFactory.h \
    MagicRoom.h \
    MapSite.h \
    Maze.h \
    MazeFactory.h \
    MazeFactoryPrototype.h \
    MazeGame.h \
    OrdinaryDoor.h \
    OrdinaryMazeFactory.h \
    OrdinaryRoom.h \
    Room.h \
    Wall.h
