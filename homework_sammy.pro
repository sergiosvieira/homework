TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    set.cpp \
    multiset.cpp \
    map.cpp \
    multimap.cpp \
    dynamicarray.cpp

HEADERS += \
    set.h \
    multiset.h \
    map.h \
    multimap.h \
    dynamicarray.h
