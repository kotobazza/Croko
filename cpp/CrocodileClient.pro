QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    createroomwidget.cpp \
    difficultyselector.cpp \
    generatedcodeselector.cpp \
    joinwidget.cpp \
    main.cpp \
    maingame.cpp \
    mainwindow.cpp \
    rejimeselector.cpp \
    slotsselector.cpp \
    startingwidget.cpp

HEADERS += \
    createroomwidget.h \
    difficultyselector.h \
    generatedcodeselector.h \
    joinwidget.h \
    maingame.h \
    mainwindow.h \
    rejimeselector.h \
    slotsselector.h \
    startingwidget.h

FORMS += \
    createroomwidget.ui \
    difficultyselector.ui \
    generatedcodeselector.ui \
    joinwidget.ui \
    maingame.ui \
    mainwindow.ui \
    rejimeselector.ui \
    slotsselector.ui \
    startingwidget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc
