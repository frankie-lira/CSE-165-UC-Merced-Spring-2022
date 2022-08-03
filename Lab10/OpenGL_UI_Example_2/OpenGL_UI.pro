QT       += core gui opengl
LIBS += -framework OpenGL

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++11

TARGET = MYGL
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    my_gl.cpp

HEADERS  += mainwindow.h \
    my_gl.h

FORMS    += mainwindow.ui

#LIBS    += -lopengl32
