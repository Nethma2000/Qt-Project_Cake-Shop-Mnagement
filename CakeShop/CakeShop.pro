QT       += core gui sql printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addcakes.cpp \
    addreservations.cpp \
    addsuppliers.cpp \
    adminhome.cpp \
    billing.cpp \
    cashierhome.cpp \
    main.cpp \
    login.cpp \
    managereservations.cpp \
    modifysuppliers.cpp \
    notepad.cpp \
    notepadapp.cpp \
    updateproducts.cpp \
    viewproducts.cpp \
    viewreservations.cpp

HEADERS += \
    addcakes.h \
    addreservations.h \
    addsuppliers.h \
    adminhome.h \
    billing.h \
    cashierhome.h \
    login.h \
    managereservations.h \
    modifysuppliers.h \
    notepad.h \
    notepadapp.h \
    updateproducts.h \
    viewproducts.h \
    viewreservations.h

FORMS += \
    addcakes.ui \
    addreservations.ui \
    addsuppliers.ui \
    adminhome.ui \
    billing.ui \
    cashierhome.ui \
    login.ui \
    managereservations.ui \
    modifysuppliers.ui \
    notepad.ui \
    notepadapp.ui \
    updateproducts.ui \
    viewproducts.ui \
    viewreservations.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
