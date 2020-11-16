QT -= gui
QT += widgets

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        colours.cpp \
        donut.cpp \
        lineargradients.cpp \
        lines.cpp \
        main.cpp \
        patterns.cpp \
        puff.cpp \
        radialgradients.cpp \
        shapes.cpp \
        transparentrectangels.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    colours.h \
    donut.h \
    lineargradients.h \
    lines.h \
    patterns.h \
    puff.h \
    radialgradients.h \
    shapes.h \
    transparentrectangels.h
