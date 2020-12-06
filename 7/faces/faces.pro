TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        director.cpp \
        ears.cpp \
        eyes.cpp \
        goodface.cpp \
        goodfacebuilder.cpp \
        hair.cpp \
        main.cpp \
        mouse.cpp \
        nose.cpp \
        smileface.cpp \
        smilefacebuilder.cpp \
        uglyface.cpp \
        uglyfacebuilder.cpp

HEADERS += \
    director.h \
    ears.h \
    eyes.h \
    face.h \
    facebuilder.h \
    goodface.h \
    goodfacebuilder.h \
    hair.h \
    mouse.h \
    nose.h \
    smileface.h \
    smilefacebuilder.h \
    uglyface.h \
    uglyfacebuilder.h
